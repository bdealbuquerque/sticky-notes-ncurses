#include <curses.h>
#include <string.h>
#include "snorse.h"			/* ncurses.h includes stdio.h */  
#include "config.h"
 
int main()
{
 char mesg[]="- ";		/* message to be appeared on the screen */
 char str[MAXBUFSIZE];
 int row,col;				
 int y, x;
 int ch;

 keypad(stdscr, TRUE);

 y = 1;
					 
 initscr();	

 for (;;){
	 switch(ch = wgetch(stdscr)){
		case 'i':
		 work_on_win(stdscr,y,strlen(mesg),mesg,str);
		 getyx(stdscr,y,x);
		 break;
		case 'e':
		 edit_on_win(stdscr, y, x);
		 getyx(stdscr,y,x);
		 break;
	 }
 }

 getch();
 endwin();

 return 0;
}
