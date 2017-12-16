/*
** EPITECH PROJECT, 2017
** sokoban.h
** File description:
** blabla
*/

#ifndef SOKOBAN_H
#define SOBOKAN_H
#define DELAY 30000
#define PATERN 10000

typedef struct coords
{
	int x;
	int y;
	int max_x;
	int max_y;
	int next_x;

} coords;

int brain(char *argv);
void check_map(char *buffer);
char *init(char *buffer, int fd);
char *init_save(char *buffer, char *save);
void init_struct(coords *cd);
void commands(char *buffer, char *save, int line);
int find_p(char *buffer);
void get_key(char *buffer, int line, int coord_p);
int my_getline(char *buffer);
void check_bombs(char *buffer, char *save);
void check_loose(char *buffer, int line);
void check_2boxs(char *buffer, int line, int i, int j);
void rightnleft(char *buffer, int coord_p, int ch);
void upndown(char *buffer, int line, int coord_p, int ch);
void box_up(char *buffer, int coord_p, int line);
void box_dwn(char *buffer, int coord_p, int line);
void box_rgt(char *buffer, int coord_p);
void box_lft(char *buffer, int coord_p);

#endif
