#include <curses.h>

int main() {
  initscr();
  move(1, 10);
  printw("Hello");
  refresh();
  getch();
  endwin();
  return 0;
}
