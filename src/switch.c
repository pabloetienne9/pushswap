/*
** EPITECH PROJECT, 2018
** switch.c
** File description:
** switch
*/

#include "../include/push.h"

int pa(push_t *push)
{
    int save = push->l_b[0];
    if (push->l_b == NULL)
        return (84);
    deplace_left(push->l_b, push->size_b);
    deplace_right(push->l_a, push->size_a);
    push->l_a[0] = save;
    push->size_a++;
    return (0);
}

int pb(push_t *push)
{
    int save = push->l_a[0];

    if (push->l_b == NULL)
        return (84);
    deplace_left(push->l_a, push->size_a);
    deplace_right(push->l_b, push->size_b);
    push->l_b[0] = save;
    push->size_b++;
    my_putstr("pb ");
    return (0);
}