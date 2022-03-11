#include "ft_push_swap.h"

// ORIGINAL PRINTF ALERT
// In moves1 you can find SWAP and PUSH moves

/*                  NAME - SWAP_ONE
This functions swaps the first 2 elements of a likend list.
(node **list)   the address of the head of a list
(char stack)    reference to witch stack to swap, a or b.*/
void ft_swap_one(node **list, char stack)
{
    node *temporary1;
    node *temporary2;

    // Only swap if there's more than one element on the list
    if ((*list)->next == NULL)
        return ;
    // Swap moves
    *list = (*list)->next;
    temporary2 = (*list)->next;
    (*list)->next = temporary1;
    (*list)->next->next = temporary2;
    // Print the move made to the stack (a or b)
    if (stack == 'a')
        printf("sa\n");
    else if (stack == 'b')
        printf("sb\n");
}

/*                      NAME - SWAP_BOTH
This function swaps the first 2 elements of list1 and list2 */
void ft_swap_both(node **list1, node **list2)
{
    ft_swap_one(list1, 'x');
    ft_swap_one(list2, 'x');
    printf("ss\n");
}




void ft_push(node **list1, node **list2, char stack)
{
    node *temporary;

    if (stack == 'a')
    {
        if (*list2 == NULL)
            return ;
        temporary = *list1;
        *list1 = *list2;
        *list2 = (*list2)->next;
        (*list1)->next = temporary;
        printf("pa\n");
    }
    else if (stack == 'b')
    {
        if (*list1 == NULL)
            return ;
        temporary = *list2;
        (*list2) = *list1;
        *list1 = (*list1)->next;
        (*list2)->next = temporary;
        printf("pb\n");
    }    
}