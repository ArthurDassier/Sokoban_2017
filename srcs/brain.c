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
	int	line = 0;
	coords	cd;

	init_struct(&cd);
	buffer = init(buffer, fd);
	line = my_getline(buffer);
	while(1) {
		commands(buffer, line);
		check_loose(buffer, line);
	}
	endwin();
	close(fd);
	free(buffer);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 1 || argc > 2)
	 	return(84);
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		the_h();
		return(0);
	}
	brain(argv[1]);
	return (0);
}
