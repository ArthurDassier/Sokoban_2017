/*
** EPITECH PROJECT, 2017
** cases_box.c
** File description:
** blabla
*/

#include "my.h"

void box_up(char *buffer, int coord_p, int line)
{
	if(buffer[coord_p - line * 2 - 2] != '#' && buffer[coord_p - line * 2 - 2] != 'X') {
		buffer[coord_p] = ' ';
		buffer[coord_p - line - 1] = 'P';
		buffer[coord_p -line * 2 - 2] = 'X';
	}
}

void box_dwn(char *buffer, int coord_p, int line)
{
	if(buffer[coord_p + line * 2 + 2] != '#' && buffer[coord_p + line * 2 + 2] != 'X') {
		buffer[coord_p] = ' ';
		buffer[coord_p + line + 1] = 'P';
		buffer[coord_p + line * 2 + 2] = 'X';
	}
}

void box_rgt(char *buffer, int coord_p)
{
	if(buffer[coord_p + 2] != '#' && buffer[coord_p + 2] != 'X') {
		buffer[coord_p] = ' ';
		buffer[coord_p + 1] = 'P';
		buffer[coord_p + 2] = 'X';
	}
}

void box_lft(char *buffer, int coord_p)
{
	if(buffer[coord_p - 2] != '#' && buffer[coord_p - 2] != 'X') {
		buffer[coord_p] = ' ';
		buffer[coord_p - 1] = 'P';
		buffer[coord_p - 2] = 'X';
	}
}
