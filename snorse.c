#include <curses.h>
#include <string.h>
#include "config.h"

void work_on_win(WINDOW *win, int y, int x, char mesg[], char str[MAXBUFSIZE]){
	int ch, c;
	int row, col;

	getmaxyx(win, row, col);

	for(;;){
		
		

		mvprintw(y,x,"%s",mesg);
		getstr(str);
		y++;

		if (y == row-1)
			break;
		if (*str == 27)
			break;
		}
	}
