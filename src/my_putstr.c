/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** task01
*/

#include "push.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
}
