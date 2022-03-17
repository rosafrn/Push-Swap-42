/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:40 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node
{
    int number;
    int max;
    int min;
    int order;
    struct node *next;
} node;

int check_errors(int argc, char **argv);
int check_integer(char *argv);
int check_duplicate(char **argv, int i);

node *create_node(char *argv);
node *create_list(int argc, char **argv);
void free_list(node *head);

void swap(node **head);
void sa(node **stacks);
void sb(node **stacks);
void ss(node **stacks);

void push(node **head1, node **head2);
void pa(node **stacks);
void pb(node **stacks);

void rotate(node **head);
void ra(node **stacks);
void rb(node **stacks);
void rr(node **stacks);

void rerotate(node **head);
void rra(node **stacks);
void rrb(node **stacks);
void rrr(node **stacks);

void sort(node **stacks, int argc);
int check_order_a(node **head);
node *get_last(node **head);
void get_max(node **head);
void get_min(node **head);
void get_order(node **head, int argc);






#endif

