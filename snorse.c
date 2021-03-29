#include <curses.h>
#include <string.h>
#include "config.h"

void work_on_win(WINDOW *win, int y, int x, char mesg[], char str[MAXBUFSIZE]){
	int ch;
	int row, col;

	getmaxyx(win, row, col);

	do{
	mvprintw(y,x,"%s",mesg);
	getstr(str);
	y++;
	} while ((ch = wgetch(win)) != KEY_F(1) && y<row);
}

/*void work_on_win(WINDOW *win, int y, int x, char mesg[], char str[MAXBUFSIZE]){
	int ch;
	keypad(win, TRUE);

	while((ch = wgetch(win)) != KEY_F(1)){
		switch(ch){
			case 10:
				mvwprintw(win,y,x,"%s",mesg);
				getstr(str);
				break;
		}
	}
}*/





