#include "push_swap.h"

void sort3(node **stacks)
{
        if (last(&stacks[0])->order > stacks[0]->order && last(&stacks[0])->order < stacks[0]->next->order)
        {
            rra(stacks);
            sa(stacks);
        }
        if (stacks[0]->order > last(&stacks[0])->order)
            ra(stacks);
        if (stacks[0]->order > stacks[0]->next->order)
            sa(stacks);
}

void sort5(node **stacks)
{
    int i;

    i = 1;
    while(i <= 2)
    {
        while (stacks[0]->order != i)
        {
            if (where2go(&stacks[0], 1, 5) == 1)
                ra(stacks);
            else
                rra(stacks);
        }
        if (check_order_a(&stacks[0], 5) == 1)
            return ;
        pb(stacks);
        i++;
    }
    sort3(stacks);
    pa(stacks);
    pa(stacks);
}

void sort100(node **stacks)
{
    int i;
    int x;

    i = 100;
    x = create_chunks(stacks);
    while (i > 0)
    {
        while (stacks[1]->order != i)
        {
            if (where2go(&stacks[1], i, 100) == 1)
            {
                rb(stacks);
                //x++;
            }
            else
            {
                rrb(stacks);
                //x++;
            }
        }
        pa(stacks);
        //x++;
        i--;
    }
    printf ("AAAAAAAAAAAAAAA %d\n", x);
    
}

int create_chunks(node **stacks)
{
    int i; 

    i = 0;
    i = chunks(stacks, 1, 25);
    i = i + chunks(stacks, 26, 50);
    i = i + chunks(stacks, 51, 75);
    i = i + chunks(stacks, 76, 100);
    return (i);
}

int chunks(node **stacks, int min, int max)
{
    int i;
    int x;

    i = 1;
    x = 0;
    while (i <= 25)
    {
        while (stacks[0]->order < min || stacks[0]->order > max)
        {
            if (where2go2(&stacks[0], max, min) == 1)
            {
                ra(stacks);
                x++;
            }
            else
            {
                rra(stacks);
                x++;
            }
        }
        pb(stacks);
        x++;
        i++;
    }
    return(x);
}

