/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

int main(int argc, char *argv[])
{
	int	fd = open(argv[1], O_RDONLY);
	char	*buffer = 0;
	int	line = 0;
	coords	cd;

	init_struct(&cd);
	buffer = init(buffer, fd);
	line = my_getline(buffer);
	while(1) {
		commands(buffer, line);
	}
	endwin();
	close(fd);
	free(buffer);
	return (0);
}
