#include "push_swap.h"

/*void sort1(node **stacks, int argc)
{
    int i;
    int flag = 0;
    int flag1 = 0;
    int size_of_sorted = 4;
    int count = 0;
    
    //ordenar
    //while (check_order_a(&stacks[0], argc) != 1)
        if ((count_list(&stacks[0]) >= (size_of_sorted * 2) && check_order_a(&stacks[0], (size_of_sorted * 2)) == 1) || (check_order_a(&stacks[0], size_of_sorted) == 1 && (count_list(&stacks[0]) < (size_of_sorted * 2))))
        {
            flag1 = 1;
        }
        while (count_list(&stacks[0]) >= size_of_sorted && flag != 2 && flag1 == 0)
        {
            i = 0;
            if (flag == 0)
            {
                if (check_order_b(&stacks[0], size_of_sorted) == 1)
                {
                    while (i++ < size_of_sorted)
                    {
                        pb(stacks);
                    }
                }
                else 
                    merge2(stacks, size_of_sorted);
                flag = 1;
            }
            else if (flag == 1)
            {
                if (check_order_a(&stacks[0], size_of_sorted) == 1)
                {
                    while (i++ < size_of_sorted)
                    {
                        pb(stacks);
                    }
                }
                else
                    merge1(stacks, size_of_sorted);
                flag = 2;
            }
        }
        while (stacks[1] != NULL && flag1 == 0)
        {
            if (stacks[1]->order < (get_last(&stacks[1]))->order)
            {
                rrb(stacks);
                pa(stacks);
                continue ;
            }
            else 
                pa(stacks);
        }
        count = size_of_sorted;
        //se existirem numeros a mais para ordenar
        if ((count_list(&stacks[0]) - count) < 4)
        {
            if (check_order_a(&stacks[0], argc) == 1)
                return ;
            rra(stacks);
            rra(stacks);
            check3(stacks, argc);    
        }
        
}
    //return ;
//}


//check if the number at last, first or in the middle
//  1 - last
// -1 - firts
//  0 - middle
int check3_1(node **stacks, int argc)
{
    if (stacks[0]->order == argc || stacks[0]->order == (argc-1) || stacks[0]->order == (argc-2))
    {
            if (stacks[0]->next->order == argc || stacks[0]->next->order == (argc-1) || stacks[0]->next->order == (argc-2))
            {
                if ((get_last(&stacks[0]))->order == argc || (get_last(&stacks[0]))->order == (argc-1) || (get_last(&stacks[0]))->order == (argc-2))
                    return (1);
            }
    }
    if (stacks[0]->order == 1 || stacks[0]->order == 2 || stacks[0]->order == 3)
    {
            if (stacks[0]->next->order == 1 || stacks[0]->next->order == 2 || stacks[0]->next->order == 3)
            {
                if ((get_last(&stacks[0]))->order == 1 || (get_last(&stacks[0]))->order == 2 || (get_last(&stacks[0]))->order == 3)
                    return (-1);
            }
    }
    return (0);
}

void check3_last(node **stacks)
{
    while (stacks[0]->order > stacks[0]->next->order || stacks[0]->order < (get_last(&stacks[0]))->order)
    {  
        if (stacks[0]->order > stacks[0]->next->order)
        {
            sa(stacks);
            continue ;
        }
        if (stacks[0]->order < (get_last(&stacks[0]))->order)
        {
            rra(stacks);
            sa(stacks);
            ra(stacks);
        }
    }
    ra(stacks);
    ra(stacks);
}

void check3_first(node **stacks)
{
    printf("entre\n");
    while (stacks[0]->order > stacks[0]->next->order || stacks[0]->order < (get_last(&stacks[0]))->order)
    {  
        if (stacks[0]->order > stacks[0]->next->order)
        {
            sa(stacks);
            continue ;
        }
        if (stacks[0]->order < (get_last(&stacks[0]))->order)
        {
            rra(stacks);
            sa(stacks);
            ra(stacks);
        }
    }
    rra(stacks);
}

void check3_middle(node **stacks)
{
    if (stacks[0]->order < stacks[0]->next->order)
            sa(stacks);
    if (stacks[0]->order > (get_last(&stacks[0]))->order)
    {
        rra(stacks);
        sa(stacks);
    }
    ra(stacks);
    if (stacks[0]->order < stacks[0]->next->order)
        sa(stacks);
    ra(stacks);
    ra(stacks);
    last_merge(stacks, 3);
}

void check3(node **stacks, int argc)
{
    int i;

    i = check3_1(stacks, argc);
    if (i == 1)
        check3_last(stacks);
    else if (i == -1)
        check3_first(stacks);
    else if (i == 0)
        check3_middle(stacks);
}

void last_merge(node **stacks, int i)
{
    while (i != 0)
    {
        if (stacks[0]->order > (get_last(&stacks[0]))->order)
        {
            rra(stacks);
            pb(stacks);
            i--;
        }
        else
            pb(stacks);

    }
    while (stacks[1] != NULL)
    {
        pa(stacks);
    }
}


//esta funcao passa o nr menor
void merge1(node **stacks, int size_of_sorted)
{
    int i;
    int flag1;
    int flag2;

    i = 0;
    flag1 = 0;
    flag2 = 0;
    position1(stacks);
    while (i++ < size_of_sorted)
    {
        if ((stacks[0]->order > (get_last(&stacks[0]))->order && flag1 < 2) || flag2 >= 2)
        {
            rra(stacks);
            pb(stacks);
            flag1++;
            continue ;
        }
        else
        {
            pb(stacks);
            flag2++;
        }
    }
}

void position1(node **stacks)
{
    if (stacks[0]->order < stacks[0]->next->order)
       sa(stacks);
    ra(stacks);
    ra(stacks);
    if (stacks[0]->order > stacks[0]->next->order)
        sa(stacks);
}

//esta funcao passa o nr maior
void merge2(node **stacks, int size_of_sorted)
{
    int i;
    int flag1;
    int flag2;

    i = 0;
    flag1 = 0;
    flag2 = 0;
    position2(stacks);
    while (i++ < size_of_sorted)
    {
        if ((stacks[0]->order < (get_last(&stacks[0]))->order && flag1 < 2) || flag2 >= 2)
        {
            rra(stacks);
            pb(stacks);
            flag1++;
            continue ;
        }
        else
        {
            pb(stacks);
            flag2++;
        }
    }
}

void position2(node **stacks)
{
    if (stacks[0]->order > stacks[0]->next->order)
       sa(stacks);
    ra(stacks);
    ra(stacks);
    if (stacks[0]->order < stacks[0]->next->order)
        sa(stacks);
}*/
