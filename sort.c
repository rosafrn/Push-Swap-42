
#include "push_swap.h"

void distribute(node **stacks, int argc)
{
    if (check_order_a(&stacks[0], argc) == 1)
        return ;
    
    else if (argc == 3)
        sort3(stacks);
    else if (argc == 5)
        sort5(stacks);
    else
        sort(stacks);
    
}

void sort3(node **stacks)
{
        while (check_order_a(&stacks[0], 3) != 1)
        {
            if (last(&stacks[0])->order > stacks[0]->order && last(&stacks[0])->order < stacks[0]->next->order)
            {
                sa(stacks);
                ra(stacks);
            }
            else if (stacks[0]->order > last(&stacks[0])->order)
                ra(stacks);
            else if (stacks[0]->order > stacks[0]->next->order)
                sa(stacks);
        }
}

void sort5(node **stacks)
{
    int i;

    i = 1;
    while(i <= 2)
    {
        while (stacks[0]->order != i)
        {
            if (where2go(&stacks[0], i) == 1)
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

void sort(node **stacks)
{
    int i;

    i = count_list(&stacks[0]);
    if (i < 200)
        create_chunks(stacks);
    else
        create_big_chunks(stacks);
    while (i > 0)
    {
        while (stacks[1]->order != i)
        {
            if (where2go(&stacks[1], i) == 1)
                rb(stacks);
            else
                rrb(stacks);
        }
        pa(stacks);
        i--;
    }
}

void create_chunks(node **stacks)
{
    int x;
    int y;

    x = count_list(&stacks[0]);
    y = x / 5;
    chunks(stacks, 1, y, y);
    chunks(stacks, (y + 1), (y + y), y);
    chunks(stacks, (y + y + 1), (y + y + y), y);
    chunks(stacks, (y + y + y + 1), (y + y + y + y), y);
    chunks(stacks, (y + y + y + y + 1), x, (x - (y *4)));
}

void create_big_chunks(node **stacks)
{
    int x;
    int y;

    x = count_list(&stacks[0]);
    y = x / 10;
    chunks(stacks, 1, y, y);
    chunks(stacks, (y + 1), (y * 2), y);
    chunks(stacks, (y * 2 + 1), (y * 3), y);
    chunks(stacks, (y * 3 + 1), (y * 4), y);
    chunks(stacks, (y * 4 + 1), (y * 5), y);
    chunks(stacks, (y * 5 + 1), (y * 6), y);
    chunks(stacks, (y * 6 + 1), (y * 7), y);
    chunks(stacks, (y * 7 + 1), (y * 8), y);
    chunks(stacks, (y * 8 + 1), (y * 9), y);
    chunks(stacks, (y * 9 + 1), x, (x - (y * 9)));
}

void chunks(node **stacks, int min, int max, int chunk_size)
{
    int i;

    i = 1;
    while (i <= chunk_size)
    {
        while (stacks[0]->order < min || stacks[0]->order > max)
        {
            if (where2go2(&stacks[0], max, min) == 1)
                ra(stacks);
            else
                rra(stacks);
        }
        pb(stacks);
        i++;
    }
}
