/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** task07
*/

#include "push.h"

int my_put_nbr(int nb)
{
    int tmp;

    if (nb < 0) {
        my_putchar(45);
        nb = -nb;
    }
    if (nb >=10) {
        tmp = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(tmp + 48);
    } else
        my_putchar(nb + 48);
}
