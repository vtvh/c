#include <ncurses.h>

int main() {
    // Initialize ncurses
    initscr();

    // Print something on the screen
    printw("Hello, ncurses!");

    // Refresh the screen to show the changes
    refresh();

    // Wait for user input
    getch();

    // End ncurses
    endwin();

    return 0;
}
