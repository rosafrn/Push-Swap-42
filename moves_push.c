/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:31 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:32 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// PUSH MOVES
// This functions take the first element of a linked list
// and put it at the top of another linked list.
// (node **head)   the address of the head of a list.

void pa(node **stacks);
void pb(node **stacks);

void push(node **head1, node **head2)
{
    node *tmp;

    if (*head2 == NULL)
      return ;
    tmp = *head1;
    *head1 = *head2;
    *head2 = (*head2)->next;
    (*head1)->next = tmp;   
}

void pa(node **stacks)
{
    push(&stacks[0], &stacks[1]);
    write(1, "pa\n", 3);  
}

void pb(node **stacks)
{
    push(&stacks[1], &stacks[0]);
    write(1, "pb\n", 3);
}
