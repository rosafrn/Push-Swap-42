#include "ft_push_swap.h"

int main(int argc, char **argv)
{
    node *list1;
    node *list2;

    //list2 = NULL;
    if (argc < 2)
    {
        printf("\n");
        return (0);
    }
    if (ft_check_errors(argc, argv) == 0)
    {
        printf("Error\n");
        return (0);
    }

    list1 = ft_create_list(argc, argv);
    list2 = ft_create_list(argc, argv);
    // If there is not enough space to create the linked list
    // return Error 
    if (list1 == NULL)
    {
        printf("Error\n");
        return (0);
    }

    ft_swap_one(&list1, 'b');

    //printing the list to debug
    printf("    STACK A\n");
    while (list1 != NULL)
    {
        printf("%d\n", list1->number);
        list1 = list1->next;
    }
    printf("    STACK B\n");
    while (list2 != NULL)
    {
        printf("%d\n", list2->number);
        list2 = list2->next;
    }

    //ft_sort_list(int argc, node *list);
    //return (1);
}