#include "push_swap.h"

void sort(node **stacks, int argc)
{
    int i;
    int x;

    i = 1;
    while (stacks[0] != NULL)
    {
        x = where2go(stacks, i, argc);
        //if (count_list(&stacks[0]) > 1 && stacks[0]->order == (stacks[0]->next->order + 1))
        //    sa(stacks);
        if (x == 0)
        {
            while (stacks[0]->order != i)   
                rra(stacks);
            if (i == 1 && check_order_a(stacks, argc) == 1)
                return ;
            pb(stacks);
        }
        else if (x == 1)
        {
            while (stacks[0]->order != i)
                ra(stacks);
            if (i == 1 && check_order_a(stacks, argc) == 1)
                return ;
            pb(stacks);
        }
        i++;
    }

    while (stacks[1] != NULL)
    {
        pa(stacks);
    }
}

int where2go(node **stacks, int i, int argc)
{
    int x;
    node *temp;

    x = 1;
    temp = stacks[0];
    while (temp != NULL)
    {
        if (temp->order == i)
            break;
        temp = temp->next;
        x++;
    }

    if (x > (argc/2))
    {
        return(0);
    }
    if (x <= (argc/2))
    {
        return (1);
    }
    return (-1);
}