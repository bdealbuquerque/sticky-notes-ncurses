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

void edit_on_win(WINDOW *win, int y, int x){ /*Mode that edits lines*/
	int ch;
	keypad(win, TRUE);

	while((ch = wgetch(win)) != 'q')
    {
        switch (ch)
        {
          case KEY_LEFT:
            x--;
            break;
          case KEY_RIGHT:
            x++;
            break;
          case KEY_UP:
            y--;
            break;
          case KEY_DOWN:
            y++;
            break;
        }

        wmove(win, y, x);
        wrefresh(win);

		  switch (ch)
		  {
			  case 'x':
				  wdelch(win);
				  break;
			  case 'd':
				  wdeleteln(win);
				  break;
		  }
		  wrefresh(win);

    }
}

char select_mode(WINDOW *win){ /*Selects between writing text or editing*/
	return wgetch(win); 
}
