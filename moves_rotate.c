/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:36 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:37 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ROTATE MOVES
// This functions shift up all elements of a linked list by 1.
// The first element becomes the last one.
// (node **head)   the address of the head of a list.

void ra(node **head);
void rb(node **head);
void rr(node **head);

void rotate(node **head)
{
    node *tmp1;
    node *tmp2;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    tmp1 = *head;
    *head = (*head)->next;
    tmp2 = *head;
    while(tmp2->next != NULL)
    {
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp1;
    tmp1->next = NULL;
}

void ra(node **stacks)
{  
    rotate(&stacks[0]);
    write(1, "ra\n", 3);

}

void rb(node **stacks)
{
    rotate(&stacks[1]);
    write(1, "rb\n", 3);
}

void rr(node **stacks)
{
    rotate(&stacks[0]);
    rotate(&stacks[1]);
    write(1, "rr\n", 3);
}