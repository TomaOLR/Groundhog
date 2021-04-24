/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "groundhog.h"

int help()
{
    printf("SYNOPSIS\n    ./groundhog period\n");
    printf("DESCRIPTION\n");
    printf("    period      the number of days defining a period\n");
}

char *get_input(void)
{
    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);

    if (line != NULL)
        line = sup_last_char(line);

    return (line);
}

void pre_switch_occurs(int *i, int *temp_switch, float value, float next_value)
{
    if (value >= 0 && next_value < 0
        || value < 0 && next_value >= 0) {
        *temp_switch += 1;
        *i += 1;
    }
}

int make_groundhog(char **av)
{
    float *tab = malloc(sizeof(float) * atoi(av[1]));
    char *str = NULL;
    int count = 0;
    float tmp = 0;
    int temp_switch = 0;

    for (int i = 0; 42; i = 0) {
        str = get_input();
        if (ges_error(str) == 84)
            continue;
        if (strcmp("STOP", str) == 0) {
            printf("Global tendency switched %d times\n", temp_switch);
            return (0);
        }
        count += 1;
        pre_switch_occurs(&i,&temp_switch,tmp,pourcentage(tab,atof(str)));
        tmp = pourcentage(tab, atof(str));
        print(tab, atoi(av[1]), atof(str), count);
        switch_occurs(i);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac <= 1) {
        printf("./groundhog period\n");
        return (84);
    }
    if (strcmp("-h", av[1]) == 0) {
        help();
        return (0);
    }
    if (its_float(av[1]) == false) {
        print_error("av[1] is not a an expected value\n");
        return (84);
    }

    return (make_groundhog(av));
}
