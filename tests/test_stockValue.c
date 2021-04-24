/*
** EPITECH PROJECT, 2021
**
** File description:
**
*/

#include <string.h>
#include <criterion/criterion.h>
#include <criterion/assert.h>
#include "groundhog.h"

Test(stockValue_func, simple_test)
{
    float *tab = malloc(sizeof(float) * 3);

    stockValue(tab, 42.24, 0);
    stockValue(tab, 54.24, 1);
    stockValue(tab, 16.21, 2);

    cr_assert_float_eq(tab[0], 0, 42.24);
    cr_assert_float_eq(tab[1], 0, 54.24);
    cr_assert_float_eq(tab[2], 0, 16.21);
}
