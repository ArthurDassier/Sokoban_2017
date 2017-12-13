/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

int main(int argc, char *argv[])
{
	int		fd = open(argv[1], O_RDONLY);
	char		*buffer = 0;

	initscr();
	move(LINES, COLS);
	buffer = malloc(sizeof(char) * 1000);
	read(fd, buffer, sizeof(char) * 1000);
	printw(buffer);
	refresh();
	getch();
	endwin();
	close(fd);
	free(buffer);
	return (0);
}
