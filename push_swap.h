#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node
{
    int number;
    int max;
    int min;
    struct node *next;
} node;

int check_errors(int argc, char **argv);
int check_integer(char *argv);
int check_duplicate(char **argv, int i);

node *create_node(char *argv);
node *create_list(int argc, char **argv);
void free_list(node *head);

void swap(node **head);
void sa(node **head);
void sb(node **head);
void ss(node **head1, node** head2);

void push(node **head1, node **head2);
void pa(node **head1, node **head2);
void pb(node **head1, node **head2);

void rotate(node **head);
void ra(node **head);
void rb(node **head);
void rr(node **head1, node **head2);

void rerotate(node **head);
void rra(node **head);
void rrb(node **head);
void rrr(node **head1, node **head2);






#endif

