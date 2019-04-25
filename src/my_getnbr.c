/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** task05
*/

#include "push.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (*str == '-') {
            sign = sign * -1;
        }
        i = i + 1;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + str[i] - 48;
        i = i + 1;
    }
    return (nb * sign);
}
