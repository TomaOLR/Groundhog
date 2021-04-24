/*
** EPITECH PROJECT, 2021
** stockValue.c
** File description:
** stockValue.c
*/

#include <stdlib.h>
#include <stdio.h>

void stockValue(float *tab, float value, int period)
{
    for (int i = 0; i != period; i += 1) {
        if (i != period - 1)
            tab[i] = tab[i + 1];
        else
            tab[i] = value;
    }
}
