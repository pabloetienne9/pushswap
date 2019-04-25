/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include "push.h"

int main(int ac, char **argv)
{
    push_t *buffer = malloc(sizeof(buffer));
    buffer->l_a = malloc(sizeof(int) * (ac -1));
    buffer->l_b = malloc(sizeof(int) * (ac -1));
    if (buffer->l_a == NULL || buffer->l_b == NULL)
        return (84);
    int count = 1;
    int i = 0;

    while (count != ac) {
        buffer->l_a[i] = my_getnbr(argv[count]);
        count++;
        i++;
    }
    buffer->size_a = count - 1;
    push_swap(buffer);
    write(1, "\n", 1);
}
