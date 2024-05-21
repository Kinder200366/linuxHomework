#include <stdio.h>
#include "menu.h"

int maina() {
    char option;
    do {
        displayMenu();
        handleUserInput();
    } while(option != 'E');

    return 0;
}