#include "ft_push_swap.h"

node *ft_create_node(char *argv);

node *ft_create_list(int argc, char **argv)
{
    node *head;
    node *temporary;

    head = NULL;
    while (argc > 1)
    {
        temporary = ft_create_node(argv[argc - 1]);
        temporary->next = head;
        head = temporary;
        argc--;
    }

    //printing the list to debug
    while (head != NULL)
    {
        printf("%d\n", head->number);
        head = head->next;
    }
}

node *ft_create_node(char *argv)
{
    node  *n;
    
    n = malloc(sizeof(node));
    if (!n)
        return(NULL);
    n->number = atoi(argv);
    n->next = NULL;
    return(n);
}