#include "push_swap.h"

int main(int argc, char **argv)
{
    node *stack[2];
    node *temporary;

    if (argc < 2)
    {
        printf("\n");
        return (0);
    }
    if (check_errors(argc, argv) == 0)
    {
        printf("Error\n");
        return (0);
    }

    stack[0] = create_list(argc, argv);
    stack[1] = NULL;

    // If there is not enough space to create the linked list
    // return Error 
    if (stack[0] == NULL)
    {
        printf("Error\n");
        return (0);
    }

    rrb(stack);

    //ft_sort_list(int argc, node *list);

     // PRINT TO DEDUG
    printf("    STACK a\n");
    temporary = stack[0];
    while (temporary != NULL)
    {
        printf("%d\n", temporary->number);
        temporary = temporary->next;
    }
    printf("    STACK b\n");
    temporary = stack[1];
    while (temporary != NULL)
    {
        printf("%d\n", temporary->number);
        temporary = temporary->next;
    }

    //return (1);
}