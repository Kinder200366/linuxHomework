#include <stdio.h>
#include "menu.h"

int main() {
    char option;
    do {
        displayMenu();
        handleUserInput();
    } while(option != 'E');

    return 0;
}