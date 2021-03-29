#include <curses.h>
#include <string.h>
#include "snorse.h"			/* ncurses.h includes stdio.h */  
#include "config.h"
 
int main()
{
 char mesg[]="- ";		/* message to be appeared on the screen */
 char str[MAXBUFSIZE];
 int row,col;				
 int y;

 keypad(stdscr, TRUE);

 y = 1;
					 
 initscr();		
 //getmaxyx(stdscr,row,col);		
 work_on_win(stdscr, y,strlen(mesg),mesg,str);

 getch();
 endwin();

 return 0;
}
