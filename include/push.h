/*
** EPITECH PROJECT, 2018
** push.h
** File description:
** push
*/

#ifndef PUSH_H_
#define PUSH_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct push
{
    int *l_a;
    int *l_b;
    int size_a;
    int size_b;
} push_t;

int sa(int *l_a);
int sb(int *l_b);
int sc(int *l_a, int *l_b);
int pa(push_t*push);
int pb(push_t*push);
int ra(push_t*push);
int rb(push_t*push);
int rr(int *l_a, int *l_b);
int rra(push_t *push);
int rrb(push_t *push);
int rrr(int *l_a, int *l_b);
int find_smaller(push_t *push);
void deplace_left(int *list, int size);
void deplace_right(int *list, int size);
int push_swap(push_t *push);
int test_list(push_t *push);
int display_pa(int count_pa);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);

#endif
