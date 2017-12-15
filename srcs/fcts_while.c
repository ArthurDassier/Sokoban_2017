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
	check_boxs(buffer);
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
	return (i);
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
	if (ch == KEY_RIGHT || ch == KEY_LEFT)
		rightnleft(buffer, coord_p, ch);
	if (ch == KEY_UP || ch == KEY_DOWN)
		upndown(buffer, line, coord_p, ch);
}

void check_boxs(char *buffer)
{
	for(int i = 0; buffer[i] != 'O'; ++i)
		if (buffer[i] == '\0') {
			endwin();
			exit(0);
		}
}
