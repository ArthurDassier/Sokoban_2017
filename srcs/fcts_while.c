/*
** EPITECH PROJECT, 2017
** fcts_while.c
** File description:
** blabla
*/

#include "my.h"

void commands(char *buffer, int line)
{
	int	coord_p = 0;

	clear();
	printw(buffer);
	coord_p = find_p(buffer);
	refresh();
	get_key(buffer, line, coord_p);
	usleep(DELAY);
}

int find_p(char *buffer)
{
	int	i;

	for(i = 0; buffer[i]; ++i)
		if (buffer[i] == 'P')
			break;
	return(i);
}

int my_getline(char *buffer)
{
	int	nb = 0;

	while (buffer[nb] != '\n')
		++nb;
	return(nb);
}

void get_key(char *buffer, int line, int coord_p)
{
	keypad(stdscr, TRUE);
	int	ch = getch();

	if (ch == KEY_RIGHT && buffer[coord_p + 1] != '#') {
		buffer[coord_p] = ' ';
		buffer[coord_p + 1] = 'P';
	}
	if (ch == KEY_LEFT && buffer[coord_p - 1] != '#') {
		buffer[coord_p] = ' ';
		buffer[coord_p - 1] = 'P';
	}
	if (ch == KEY_DOWN && buffer[coord_p + line + 1] != '#') {
		buffer[coord_p] = ' ';
		buffer[coord_p + line + 1] = 'P';
	}
	if (ch == KEY_UP && buffer[coord_p - line - 1] != '#') {
		buffer[coord_p] = ' ';
		buffer[coord_p - line - 1] = 'P';
	}
}
