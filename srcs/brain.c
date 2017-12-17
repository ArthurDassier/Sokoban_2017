/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

void the_h()
{
	my_printf("USAGE:\n");
	my_printf("\t./my_sokoban map\n");
	my_printf("DESCRIPTION\n");
	my_printf("\tmap\tfile representing the warehouse map, containing");
	my_printf(" `#' for walls,\n");
	my_printf("\t\t`P' for the player, `X' for boxes and `O' for storage");
	my_printf(" locations.\n");
	exit(0);
}

int brain(char *argv)
{
	int	fd = open(argv, O_RDONLY);
	char	*buffer = NULL;
	char	*save = NULL;
	int	line = 0;
	coords	cd;

	init_struct(&cd);
	buffer = init(buffer, fd);
	save = init_save(buffer, save);
	line = my_getline(buffer);
	check_map(buffer);
	while(1) {
		commands(buffer, save, line);
		check_loose(buffer, line);
	}
	close(fd);
	return (0);
}

void check_map(char *buffer)
{
	for (int i = 0; buffer[i]; ++i) {
		if (buffer[i] != '#' && buffer[i] != 'O' && buffer[i] != 'X' &&
		buffer[i] != ' ' && buffer[i] != '\n' && buffer[i] != 'P') {
			endwin();
			exit(84);
		}
	}
}

int main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1 || argc > 2)
	 	return(84);
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		the_h();
		return(0);
	}
	fd = open(argv[1], O_WRONLY);
	if (fd == -1)
		return(84);
	brain(argv[1]);
	return (0);
}
