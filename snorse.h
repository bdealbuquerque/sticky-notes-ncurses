#include <curses.h>
#include <string.h>
#include "config.h"

void work_on_win(WINDOW *win, int y, int x, char mesg[], char str[MAXBUFSIZE]);

void edit_on_win(WINDOW *win, int y, int x);

void select_mode(WINDOW *win);
