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

node *last(node **head)
{
    node *tmp;
    
    tmp = *head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return (tmp);
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

int count_list(node **head)
{
    int i;
    node *tmp;

    i = 0;
    tmp = *head;
    while (tmp != NULL)
    {
       tmp = tmp->next;
       i++; 
    }
    return (i);
}

int where2go(node **stacks, int i)
{
    int x;
    int y;
    node *temp;

    x = 0;
    y = count_list(&stacks[0]);
    temp = stacks[0];
    while (temp != NULL)
    {
        if (temp->order == i)
            break;
        temp = temp->next;
        x++;
    }
    if (x > (y/2))
        return (0);
    else if (x <= (y/2))
        return (1);
    return (-1);
}

int where2go2(node **stacks, int max, int min)
{
    int x;
    int y;
    node *temp;

    x = 1;
    y = 1;
    //y = count_list(&stacks[0]);
    temp = stacks[0];
    while (temp != NULL)
    {
        if (temp->order >= min && temp->order <= max)
            break;
        temp = temp->next;
        x++;
    }
    /*if (x > (y/2))
        return (0);
    else if (x <= (y/2))
        return (1);
    return (-1);*/
    y = doubly(&stacks[0], min, max);
    if (x <= y)
        return (1);
    else if (x > y)
        return (0);
    return (-1);
}

int doubly(node **stacks, int min, int max)
{
    int y;
    int size;

    y = 0;
    size = count_list(&stacks[0]);
    while (size > 0)
    {
        if ((is_it(&stacks[0], size))->order >= min && (is_it(&stacks[0], size))->order <= max)
            break ;
        y++;
        size--;
    }
    return (y);
}

node *is_it(node **stacks, int size)
{
    node *temp;

    temp = stacks[0];
    while (size > 1)
    {
        if (temp->next == NULL)
            break ;
        temp = temp->next;
        size--;
    }
    return (temp);
}
