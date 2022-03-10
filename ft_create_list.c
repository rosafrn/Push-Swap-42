#include "ft_push_swap.h"

node *ft_create_node(char *argv);
void ft_free_list(node *head);

node *ft_create_list(int argc, char **argv)
{
    node *head;
    node *temporary;

    head = NULL; 
    while (argc > 1)
    {
        temporary = ft_create_node(argv[argc - 1]);
        if (temporary == NULL)
        {
            ft_free_list(head);
            return (NULL);
        } 
        temporary->next = head;
        head = temporary;
        argc--;
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

void ft_free_list(node *head)
{
    node *temporary;

    while (head != NULL)
    {
        temporary = head->next;
        free(head);
        head = temporary;
    }
}

