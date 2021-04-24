/*
** EPITECH PROJECT, 2021
** error_handling
** File description:
** groundhog
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "groundhog.h"

char *sup_last_char(char *src)
{
    char *dest;

    if (strlen(src) == 1 && src[0] == '\n')
        return (NULL);

    dest = malloc(sizeof(char) * strlen(src));
    for (size_t x = 0; x != (strlen(src) - 1); x++)
        dest[x] = src[x];

    dest[strlen(src) - 1] = '\0';

    return (dest);
}

bool its_float(char *str)
{
    int i = 0;

    if (str[0] == '-')
        i += 1;

    for (;str[i] != '\0'; i++) {
        if (str[i] == '.' && str[i + 1] != '\0')
            i += 1;
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

void print_error(char *str)
{
    write(2, str, strlen(str));
}

int ges_error(char *str)
{
    if (str == NULL) {
        print_error("You have to write something\n");
        return (84);
    }
    if (strcmp("STOP", str) == 0)
        return (0);
    if (its_float(str) != true) {
        print_error("You have to write a float number\n");
        return (84);
    }
    return (0);
}
