#include <iostream>
#include <ncurses.h>

int main() {
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(1);

    if (!has_colors()) {
        endwin();
        std::cerr << "No color support in this terminal\n";
        return 1;
    }

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);

    printw("It works! Press any key to exit.");
    refresh();
    getch();

    endwin();
    return 0;
}