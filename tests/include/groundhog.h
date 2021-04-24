/*
** EPITECH PROJECT, 2021
** groundhog.h
** File description:
** groundhog.h
*/

#ifndef GROUNDHOG_H_
#define GROUNDHOG_H_

#include <stdbool.h>

#endif /* GROUNDHOG_H_ */

/*error_handling.c*/
bool its_float(char *str);
char *sup_last_char(char *src);
void print_error(char *str);
int ges_error(char *str);

/*main.c*/
int help();
char *get_input(void);
void pre_switch_occurs(int *i, int *temp_switch, float value, float next_value);
int make_groundhog(char **av);

//stockValue.c
void stockValue(float *tab, float value, int period);

//getData.c
float increase(float *tab, int period, float value);
float pourcentage(float *tab, float value);
float deviation(float *tab, int period);
void print(float *tab, int period, float value, int count);
void switch_occurs(int i);
