/*
** EPITECH PROJECT, 2021
** getData.c
** File description:
** getData.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "groundhog.h"

float increase(float *tab, int period, float value)
{
    float res = 0;

    if (value - tab[period - 1] > 0)
        res += value - tab[6];
    for (int i = 6; i != 0; i -= 1)
        if (tab[i] - tab[i - 1] > 0)
            res += tab[i] - tab[i - 1];
    return (res / period);
}

float pourcentage(float *tab, float value)
{
    return (((value - tab[0]) / tab[0]) * 100);
}

float deviation(float *tab, int period)
{
    float value = 0;
    float res = 0;

    for (int i = 0; i != period; i += 1) {
        value += tab[i];
        res += tab[i] * tab[i];
    }
    res = sqrt(res/period-(value/period)*value/period);
    return (res);
}

void switch_occurs(int i)
{
    if (i > 0)
        printf ("      a switch occurs\n");
    else
        printf ("\n");
}

void print(float *tab, int period, float value, int count)
{
    float g = increase(tab, period, value);
    float r = pourcentage(tab, value);
    float s = 0;

    stockValue(tab, value, period);
    s = deviation(tab, period);
    if (count < period)
        printf("g=nan      r=nan%%     s=nan");
    else if (count == period)
        printf("g=nan      r=nan%%     s=%.2f", s);
    else
        printf("g=%.2f      r=%.0f%%     s=%.2f", g, r, s);
}
