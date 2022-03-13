#include "ft_push_swap.h"

//          SWAP MOVES

/* This functions swaps the first 2 elements of a likend list.
(node **list)   the address of the head of a list */
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

void sa(node **head)
{
    swap(head);
    write(1, "sa\n", 3);
}

void sb(node **head)
{
    swap(head);
    write(1, "sb\n", 3);
}

void ss(node **head1, node** head2)
{
    swap(head1);
    swap(head2);
    write(1, "ss\n", 3);
}

//          PUSH MOVES
void push(node **head1, node **head2)
{
    node *tmp;

    if (*head2 == NULL)
      return ;
    tmp = *head1;
    *head1 = *head2;
    *head2 = (*head2)->next;
    (*head1)->next = tmp;   
}

void pa(node **head1, node **head2)
{
    push(head1, head2);
    write(1, "pa\n", 3);  
}

void pb(node **head1, node **head2)
{
    push(head2, head1);
    write(1, "pb\n", 3);
}

//          ROTATE MOVES
void rotate(node **head)
{
    node *tmp1;
    node *tmp2;

    if ((*head)->next == NULL)
        return ;
    tmp1 = *head;
    *head = (*head)->next;
    tmp2 = *head;
    while(tmp2->next != NULL)
    {
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp1;
    tmp1->next = NULL;
}

void ra(node **head)
{  
    rotate(head);
    write(1, "ra\n", 3);

}

void rb(node **head)
{
    rotate(head);
    write(1, "rb\n", 3);
}

void rr(node **head1, node **head2)
{
    rotate(head1);
    rotate(head2);
    write(1, "rr\n", 3);
}

//          REVERSE ROTATE
void rerotate(node **head)
{
    node *tmp1;
    node *tmp2;

    tmp1 = *head;
    while (tmp1->next->next != NULL)
    {
        tmp1 = tmp1->next;
    }
    tmp2 = tmp1->next;
    tmp1->next = NULL;
    tmp1 = *head;
    *head = tmp2;
    tmp2->next = tmp1;
    
}

void rra(node **head)
{
    rerotate(head);
    write(1, "rra\n", 4);
}

void rrb(node **head)
{
    rerotate(head);
    write(1, "rrb\n", 4);
}

void rrr(node **head1, node **head2)
{
    rerotate(head1);
    rerotate(head2);
    write(1, "rrr\n", 4);
}