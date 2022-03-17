/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rerotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:33 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:34 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// REVERSE ROTATE
// This functions shift down all elements of the linked list by 1.
// The last element becomes the first one.
// (node **head)   the address of the head of a list.

void rra(node **head);
void rrb(node **head);
void rrr(node **head);

void rerotate(node **head)
{
    node *tmp1;
    node *tmp2;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    tmp1 = *head;
    while (tmp1->next->next != NULL)
    {
        tmp1 = tmp1->next;
    }
    tmp2 = tmp1->next;
    tmp1->next = NULL;
    tmp1 = *head;
    *head = tmp2;
    tmp2->next = tmp1;
    
}

void rra(node **stacks)
{
    rerotate(&stacks[0]);
    write(1, "rra\n", 4);
}

void rrb(node **stacks)
{
    rerotate(&stacks[1]);
    write(1, "rrb\n", 4);
}

void rrr(node **stacks)
{
    rerotate(&stacks[0]);
    rerotate(&stacks[1]);
    write(1, "rrr\n", 4);
}