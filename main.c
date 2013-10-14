#include <stdio.h>
#include <string.h>

#include "settings.h"

int main(int argc, char *argv[])
{
    char buffer[255];
    int valid1 = 0;
    int valid2 = 0;

    printf("(c) Élie Bouttier - Licensed under GNU GPLv3.\n");
    printf("Welcome to my challenge !\n");

    printf("Please enter password 1: ");
    scanf("%s", buffer);
    if (!strcmp(buffer, PWD1)) {
        valid1 = 1;
    }

    printf("Please enter password 2: ");
    scanf("%s", buffer);
    if (!strcmp(buffer, PWD2)) {
        valid2 = 1;
    }

    if (valid1 && valid2) {
        printf("Congratuation!\n");
        printf("%s\n", INDICE);
    } else {
        printf("Sorry, wrong combination.\n");
    }

    return 0;
}
