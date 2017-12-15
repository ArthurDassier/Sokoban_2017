/*
** EPITECH PROJECT, 2017
** sokoban.h
** File description:
** blabla
*/

#ifndef SOKOBAN_H
#define SOBOKAN_H
#define DELAY 30000

typedef struct coords
{
	int x;
	int y;
	int max_x;
	int max_y;
	int next_x;

} coords;

int brain(char *argv);
char *init(char *buffer, int fd);
void init_struct(coords *cd);
void commands(char *buffer, int line);
int find_p(char *buffer);
void get_key(char *buffer, int line, int coord_p);
int my_getline(char *buffer);
void check_boxs(char *buffer);
void check_loose(char *buffer, int line);
void rightnleft(char *buffer, int coord_p, int ch);
void upndown(char *buffer, int line, int coord_p, int ch);
void box_up(char *buffer, int coord_p, int line);
void box_dwn(char *buffer, int coord_p, int line);
void box_rgt(char *buffer, int coord_p);
void box_lft(char *buffer, int coord_p);

#endif
