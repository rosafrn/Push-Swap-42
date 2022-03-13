#include "ft_push_swap.h"

int main(int argc, char **argv)
{
    node *stack_a;
    node *stack_b;
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

    stack_a = create_list(argc, argv);
    stack_b = NULL;

    // If there is not enough space to create the linked list
    // return Error 
    if (stack_a == NULL)
    {
        printf("Error\n");
        return (0);
    }

    //ft_sort_list(int argc, node *list);

     // PRINT TO DEDUG
    printf("    STACK a\n");
    temporary = stack_a;
    while (temporary != NULL)
    {
        printf("%d\n", temporary->number);
        temporary = temporary->next;
    }
    printf("    STACK b\n");
    temporary = stack_b;
    while (temporary != NULL)
    {
        printf("%d\n", temporary->number);
        temporary = temporary->next;
    }

    //return (1);
}