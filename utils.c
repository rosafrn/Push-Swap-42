#include "push_swap.h"

int check_order_a(node **head, int count)
{
    node *tmp;
    int i;
    
    tmp = *head;
    i = 1;
    if (tmp == NULL || tmp->next == NULL)
        return (1);
    while (tmp->number < tmp->next->number)
    {
        tmp = tmp->next;
        i++;
        if (tmp->next == NULL || i == count)
            return (1);
    }
    return (0);
}

int check_order_b(node **head, int argc)
{
    node *tmp;
    int i;

    i = 1;
    tmp = *head;
    if (tmp == NULL || tmp->next == NULL)
        return (1);
    while (tmp->number > tmp->next->number)
    {
        tmp = tmp->next;
        i++;
        if (tmp->next == NULL || i == argc)
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