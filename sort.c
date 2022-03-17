/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:42 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 20:54:08 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_order_a(node **head);
node *get_last(node **head);
void get_max(node **head);
void get_min(node **head);

void sort(node **stacks)
{
    node *last_a;
    
    get_order(&stacks[0]);
    /*while (check_order_a(&stacks[0]) != 1)
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
        }*/
        
    
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

    if (*head == NULL)
    {
        printf("alguma vez\n");
        return ;
    }
    tmp = *head;
    max = *head;
    while (tmp != NULL)
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

    if (*head == NULL)
        return ;
    tmp = *head;
    min = *head;
    while (tmp != NULL)
    {
        if (tmp->number < min->number)
        {
            min = tmp;
        }
        tmp = tmp->next;
    }
    min->min = 1;
}

void get_order(node **head)
{
    node *tmp;
    node *min;
    int previous_min = -2147483648;
    int i = 1;

    tmp = *head;
    min = *head;
    while (tmp != NULL)
    {
        if (tmp->number < min->number && tmp->number > previous_min)
        {
            min = tmp;
            min->order = i;
            previous_min = min->number;
            i++;
            tmp = *head;
            continue ;
        }
        tmp = tmp->next;
    }
}

/*se last < first 
    rra;
se first > second 
    pb;
*first < first && *first > last 
    pa;
    rra;*/