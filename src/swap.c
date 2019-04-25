/*
** EPITECH PROJECT, 2018
** swap.c
** File description:
** swap
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/push.h"

int sa(int *l_a)
{
    int z;

    z = l_a[0];
    l_a[0] = l_a[1];
    l_a[1] = z;

    my_putstr("sa ");
    return (0);
}

int sb(int *l_b)
{
    int z;

    z = l_b[0];
    l_b[0] = l_b[1];
    l_b[1] = z;

    my_putstr("sb ");
    return (0);
}

int sc(int *l_a, int *l_b)
{
    sa(l_a);
    sb(l_b);

    my_putstr("sc ");
    return (0);
}