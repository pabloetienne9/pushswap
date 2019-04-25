/*
** EPITECH PROJECT, 2018
** rotate.c
** File description:
** rotate
*/

#include "push.h"

int ra(push_t *push)
{
    int i = 0;
    int save = push->l_a[0];
    deplace_left(push->l_a, push->size_a);

    while (i < push->size_a) {
        i++;
    }
    push->l_a[i-1] = save;
    my_putstr("ra ");
    return (0);
}

int rb(push_t *push)
{
    int i = 0;
    int save = push->l_b[0];
    deplace_left(push->l_b, push->size_b);

    while (i < push->size_b) {
        i++;
    }
    push->l_b[i-1] = save;
    my_putstr("rb ");
    return (0);
}

int rr(int *l_a, int *l_b)
{
    ra(l_a);
    rb(l_b);

    my_putstr("rr ");
    return (0);
}