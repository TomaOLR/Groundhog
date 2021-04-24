/*
** EPITECH PROJECT, 2021
**
** File description:
**
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/assert.h>
#include "groundhog.h"

Test(increase_func, simple_test)
{
    float *tab = malloc(sizeof(float) * 8);
    float res;

    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);

    res = increase(tab, 1, 20.00);
    cr_assert_float_eq(res, 0, res);
}

Test(pourcentage_func, simple_test)
{
    float *tab = malloc(sizeof(float) * 1);
    float res;

    stockValue(tab, 22.00, 0);
    res = pourcentage(tab, 42.00);
    cr_assert_float_eq(res, 0, res);
}

Test(deviation_func, simple_test)
{
    float *tab = malloc(sizeof(float) * 3);
    float res;

    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);
    stockValue(tab, 22.00, 0);

    res = deviation(tab, 2);
    cr_assert_float_eq(res, 0, res);
}

Test(switch_occurs_func, simple_test)
{
    switch_occurs(1);
    switch_occurs(-1);
}

Test(print_func, simple_test)
{
    float *tab = malloc(sizeof(float) * 3);

    print(tab, 3, 42.00, 2);
    printf("\n");
    print(tab, 3, 42.00, 3);
    printf("\n");
    print(tab, 3, 42.00, 4);
    printf("\n");
}
