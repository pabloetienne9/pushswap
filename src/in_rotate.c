/*
** EPITECH PROJECT, 2018
** in_rotate.c
** File description:
** in_rotate
*/


#include "push.h"

int rra(push_t *push)
{
    int j = push->size_a;
    int save = push->l_a[j];
    int i = 0;
    deplace_right(push->l_a, push->size_a);

    while (i < 0) {
        i--;
    }
    push->l_a[0] = save;
    my_putstr("rra ");
    return (0);
}

int rrb(push_t *push)
{
    int j = push->size_b;
    int save = push->l_b[j];
    int i = 0;
    deplace_right(push->l_b, push->size_b);

    while (i < 0) {
        i--;
    }
    push->l_b[0] = save;
    my_putstr("rrb ");
    return (0);
}

int rrr(int *l_a, int *l_b)
{
    rra(l_a);
    rrb(l_b);

    my_putstr("rrr ");
    return (0);
}