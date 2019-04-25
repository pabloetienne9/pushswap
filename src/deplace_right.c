/*
** EPITECH PROJECT, 2018
** deplace_right.c
** File description:
** right
*/

#include "push.h"

void deplace_right(int *list, int size)
{
    int i = size;

    while (i > 0) {
        list[i] = list[i-1];
        i--;
    }
}