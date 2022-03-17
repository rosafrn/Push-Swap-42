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
int check_order_b(node **head);
node *get_last(node **head);
void get_max(node **head);
void get_min(node **head);
void get_order(node **head, int argc);

void sort(node **stacks, int argc)
{
    node *last_a;

    get_order(&stacks[0], argc);
    get_order(&stacks[1], argc);
    get_max(&stacks[0]);
    get_min(&stacks[0]);

    while (check_order_a(&stacks[0]) != 1)
    {
        last_a = get_last(&stacks[0]);

        // 2 1 3
        if ((stacks[0]->order - 1) == stacks[0]->next->order && stacks[0]->order < last_a->order)
        {
            sa(stacks);
            continue ;
        }

        // 1 3 2
        else if ((stacks[0]->order + 1) == last_a->order && last_a->order == (stacks[0]->next->order - 1))
        {
            sa(stacks);
            ra(stacks);
            continue ;
        }

        // 2 3 1
        else if (stacks[0]->order == (last_a->order + 1) && stacks[0]->order < stacks[0]->next->order)
        {
            rra(stacks);
            continue ;
        }

        // 3 2 1
        else if (stacks[0]->order == (last_a->order + 1) && check_order_a(&stacks[0]->next) == 1)
        {
            ra(stacks);
            continue ;
        }

        // 3 2 1
        else if (stacks[0]->order == (stacks[0]->next->order + 1) && (stacks[0]->next->order == last_a->order + 1))
        {
            sa(stacks);
            rra(stacks);
            continue ;   
        }

        // ANOTHER SERIES
        



        // printf("last is %d\n", last_a->order);
        // printf("first is %d\n", stacks[0]->order);


        // else if (stacks[0]->number < stacks[0]->next->number)
        // {
        //     pb(stacks);
        //     pb(stacks);
        //     continue;
        // }
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

int check_order_b(node **head)
{
    node *tmp;

    tmp = *head;
    if (tmp == NULL || tmp->next == NULL)
        return (1);
    while (tmp->number > tmp->next->number)
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

void get_order(node **head, int argc)
{
    node *tmp;
    node *min;
    int i = 1;
    
    if (*head == NULL)
        return ;
    while(i < argc)
    {
        tmp = *head;
        min = *head;
        while (min != NULL && min->order != 0)
        {
            min = min->next;
        }
        while (tmp != NULL)
        {
            if (tmp->number < min->number && tmp->order == 0)
            {
                min = tmp;
            }
            tmp = tmp->next;
        }
        min->order = i;
        i++;
    }
}

// TO SOLVE
// se o menor numero for o primeiro, entao nao consegue encontrar os outros

/*se last < first 
    rra;
se first > second 
    pb;
*first < first && *first > last 
    pa;
    rra;*/