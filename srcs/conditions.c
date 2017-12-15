/*
** EPITECH PROJECT, 2017
** conditions.c
** File description:
** blabla
*/

#include "my.h"

void rightnleft(char *buffer, int coord_p, int ch)
{
	if (ch == KEY_RIGHT && buffer[coord_p + 1] != '#') {
		if (buffer[coord_p + 1] == 'X')
			box_rgt(buffer, coord_p);
		else {
			buffer[coord_p] = ' ';
			buffer[coord_p + 1] = 'P';
		}
	}
	if (ch == KEY_LEFT && buffer[coord_p - 1] != '#') {
		if (buffer[coord_p - 1] == 'X')
			box_lft(buffer, coord_p);
		else {
			buffer[coord_p] = ' ';
			buffer[coord_p - 1] = 'P';
		}
	}
}

void upndown(char *buffer, int line, int coord_p, int ch)
{
	if (ch == KEY_DOWN && buffer[coord_p + line + 1] != '#') {
		if (buffer[coord_p + line + 1] == 'X')
			box_dwn(buffer, coord_p, line);
		else {
		buffer[coord_p] = ' ';
		buffer[coord_p + line + 1] = 'P';
		}
	}
	if (ch == KEY_UP && buffer[coord_p - line - 1] != '#') {
		if (buffer[coord_p - line - 1] == 'X')
			box_up(buffer, coord_p, line);
		else {
		buffer[coord_p] = ' ';
		buffer[coord_p - line - 1] = 'P';
		}
	}
}

void check_loose(char *buffer, int line)
{
	int	i;

	for(i = 0; buffer[i]; ++i)
		if (buffer[i] == 'X')
			break;
	if ((buffer[i - line - 1] == '#' && buffer[i - 1] == '#') ||
	(buffer[i - line - 1] == '#' && buffer[i + 1] == '#') ||
	(buffer[i + line + 1] == '#' && buffer[i - 1] == '#') ||
	(buffer[i + line + 1] == '#' && buffer[i + 1] == '#')) {
		endwin();
		exit(1);
	}
}
