#include <stdio.h>
#include "log.h"

void logMenuOption(const char *option) {
    FILE *file = fopen("log.txt", "a");
    if (file) {
        fprintf(file, "User selected option: %s\n", option);
        fclose(file);
    } else {
        printf("Error opening log file.\n");
    }
}