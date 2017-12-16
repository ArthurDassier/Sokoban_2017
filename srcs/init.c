/*
** EPITECH PROJECT, 2017
** init.c
** File description:
** blabla
*/

#include "my.h"

char *init(char *buffer, int fd)
{
	buffer = malloc(sizeof(char) * PATERN);
	read(fd, buffer, sizeof(char) * PATERN);
	initscr();
	noecho();
	curs_set(FALSE);
	return (buffer);
}

char *init_save(char *buffer, char *save)
{
	int	i;
	save = malloc(sizeof(char) * PATERN);

	for (i = 0; buffer[i]; ++i)
		save[i] = buffer[i];
	save[i] = '\0';
	return (save);
}

void init_struct(coords *cd)
{
	cd->x = 1;
	cd->y = 0;
	cd->max_y = 0;
	cd->max_x = 0;
	cd->next_x = 0;
}
