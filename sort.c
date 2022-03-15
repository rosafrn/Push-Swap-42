/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:42 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 20:50:28 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(node **stacks)
{
    int i;
    node *a;
    node *b;
    node *last_a;
    
    a = stacks[0];
    b = stacks[1];
    
    while (check_order_a(&stacks[0]) != 1)
    {
        last_a = get_last(&stacks[0]);
        
        if (a == NULL || a->next == NULL)
            return ;
        // if (a->max = 1 && check_order_a(&stacks[0[1]]) == 1)
        // {
               
        // }
        if (a->number > a->next->number)
        {
            sa(stacks);
            continue ;
        }
        else if (a->number > last_a->number)
        {
            rra(stacks);
            continue ;
        }
        else if (a->number < a->next->number)
        {
            pb(stacks);
            pb(stacks);
            continue;
        }
        //else if (a->number <)
        
    }
}


int check_order_a(node **head)
{
    node *tmp;
    
    tmp = *head;
    if (tmp == NULL || tmp->next == NULL)
        return (1);
    while (tmp->number < tmp->next->number)
    {
        tmp = tmp->next;
        if (tmp->next == NULL)
            return (1);
    }
    return (0);
}

node *get_last(node **head)
{
    node *tmp;
    
    tmp = *head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return (tmp);
}

void get_max(node **head)
{
    node *tmp;
    node *max;

    tmp = *head;
    max->number = tmp->number;
    while (tmp->next != NULL)
    {
        if (tmp->number > max->number)
        {
            max = tmp;
        }
        tmp = tmp->next;
    }
    max->max = 1;
}

void get_min(node **head)
{
    node *tmp;
    node * min;

    tmp = *head;
    min->number = tmp->number;
    while (tmp->next != NULL)
    {
        if (tmp->number < min->number)
        {
            min = tmp;
        }
        tmp = tmp->next;
    }
    min->min = 1;
}

/*se last < first 
    rra;
se first > second 
    pb;
*first < first && *first > last 
    pa;
    rra;*/