#include <stdio.h>
#include <ncurses.h>

int main(int ac, char *av[]) { initscr();
                              
  move(LINES-2, 0);
  attron(A_REVERSE); printw(" Editing %s    WE ver0.01 ", av[1]); attroff(A_REVERSE);
  refresh();
  
  getchar(); endwin(); return 0;
  
}
