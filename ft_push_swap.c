#include "ft_push_swap.h"

int main(int argc, char **argv)
{
    node *list;

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

    list = ft_create_list(argc, argv);
    // If there is not enough space to create the linked list
    // return Error 
    if (list == NULL)
    {
        printf("Error\n");
        return (0);
    }

    ft_swap_one(&list, 's');

    //printing the list to debug
    while (list != NULL)
    {
        printf("%d\n", list->number);
        list = list->next;
    }

    //ft_sort_list(int argc, node *list);
    //return (1);
}