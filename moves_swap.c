#include "push_swap.h"

// SWAP MOVES
// This functions swap the first 2 elements of a likend list.
// (node **head)   the address of the head of a list.

void sa(node **head);
void sb(node **head);
void ss(node **head1);


void swap(node **head)
{
    node *tmp;

    // Only swap if there's more than one element on the list
    if ((*head)->next == NULL)
        return ;
    // Swap moves
    tmp = *head;
    *head = (*head)->next;
    tmp->next = (*head)->next;
    (*head)->next = tmp;
    return ;
}

void sa(node **stacks)
{
    swap(&stacks[0]);
    write(1, "sa\n", 3);
}

void sb(node **stacks)
{
    swap(&stacks[1]);
    write(1, "sb\n", 3);
}

void ss(node **stacks)
{
    swap(&stacks[0]);
    swap(&stacks[1]);
    write(1, "ss\n", 3);
}