#include "ft_push_swap.h"

// ORIGINAL PRINTF ALERT
// In moves1 you can find SWAP and PUSH moves

/*                  NAME - SWAP_ONE
This functions swaps the first 2 elements of a likend list.
(node **list)   the address of the head of a list
(char stack)  reference to witch stack to swap, a or b.

I used the address of list so I can work directly 
in memory and the funtion doesn't need to return to update itself */
void ft_swap_one(node **list, char stack)
{
    node *temporary1;
    node *temporary2;
    node *temporaryhead;

    temporaryhead = *list;
    if (temporaryhead == NULL || temporaryhead->next == NULL)
        return ;
    temporary1 = temporaryhead;
    temporaryhead = temporaryhead->next;
    temporary2 = temporaryhead->next;
    temporaryhead->next = temporary1;
    temporaryhead->next->next = temporary2;
    *list = temporaryhead;
    if (stack == 'a')
        printf("sa\n");
    else if (stack == 'b')
        printf("sb\n");
}

/*                      NAME - SWAP_BOTH
This function swaps the first 2 elements of list1 and list2 */
void ft_swap_both( node *list1, node *list2)
{
    ft_swap_one(&list1, '0');
    ft_swap_one(&list2, '0');
    printf("ss\n");
}