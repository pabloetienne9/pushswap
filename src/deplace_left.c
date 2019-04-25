/*
** EPITECH PROJECT, 2018
** deplace_left.c
** File description:
** left
*/

#include "push.h"

void deplace_left(int *list, int size)
{
    int i = 0;

    while (i < size) {
        list[i] = list[i+1];
        i++;
    }
}