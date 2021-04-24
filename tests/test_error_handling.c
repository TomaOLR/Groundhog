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

Test(its_float_func, simple_test)
{
    cr_assert_eq(its_float("5.20"), true);
    cr_assert_eq(its_float("-5.20"), true);
    cr_assert_eq(its_float("--5.20"), false);
    cr_assert_eq(its_float("-5.2A0"), false);
    cr_assert_eq(its_float("-ABCD"), false);
    cr_assert_eq(its_float("ABCD"), false);
}

Test(sup_last_char_func, simple_test)
{
    cr_assert_str_eq(sup_last_char("ABCD"), "ABC");
    cr_assert_null(sup_last_char("\n"));
    cr_assert_str_eq(sup_last_char("A"), "");
}

Test(ges_error_func, simple_test)
{
    cr_assert_eq(ges_error(NULL), 84);
    cr_assert_eq(ges_error("STOP"), 0);
    cr_assert_eq(ges_error("--5.20"), 84);
    cr_assert_eq(ges_error("-5.2A0"), 84);
    cr_assert_eq(ges_error("-ABCD"), 84);
    cr_assert_eq(ges_error("ABCD"), 84);
    cr_assert_eq(ges_error("5.20"), 0);
    cr_assert_eq(ges_error("-5.20"), 0);
}
