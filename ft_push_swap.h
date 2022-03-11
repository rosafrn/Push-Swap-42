#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    int max;
    int min;
    struct node *next;
} node;

int ft_check_errors(int argc, char **argv);
int ft_check_integer(char *argv);
int ft_check_duplicate(char **argv, int i);

node *ft_create_node(char *argv);
node *ft_create_list(int argc, char **argv);
void ft_free_list(node *head);

void ft_swap_one(node **list, char stack);
void ft_swap_both(node **list1, node **list2);
void ft_push(node **list1, node **list2, char stack);




#endif

