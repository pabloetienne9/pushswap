/*
** EPITECH PROJECT, 2018
** push_swap.c
** File description:
** pushswap
*/

#include "push.h"

int display_pa(int count_pa)
{
    while (count_pa > 1) {
        my_putstr("pa ");
        count_pa--;
    }
    if (count_pa == 1)
        my_putstr("pa");

    return (0);
}

int find_smaller(push_t *push)
{
    int i = 0;
    int smaller = 2147483647;

    while (i < push->size_a) {
        if (push->l_a[i] < smaller)
            smaller = push->l_a[i];
        i++;
    }
    return (smaller);
}

int test_list(push_t *push)
{
    int i = 1;
    int j = 0;
    int correct_order = 1;

    while (i < push->size_a && correct_order == 1) {
        if (push->l_a[j] < push->l_a[j+1]) {
            j++;
            i++;
        }
        else {
            correct_order = 0;
        }
    }
    return (correct_order);
}

int push_swap(push_t *push)
{
    int i = 0;
    int count_pa = 0;
    int correct_order = test_list(push);

    if (correct_order == 0) {
        while (push->size_a != 0) {
            int smaller = find_smaller(push);
            while (push->l_a[0] != smaller) {
                ra(push);
            }
            pb(push);
            push->size_a--;
        }
        while (push->size_b != 0) {
            pa(push);
            count_pa++;
            push->size_b--;
        }
        display_pa(count_pa);
    }
}