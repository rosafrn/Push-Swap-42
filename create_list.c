/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:20 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:20 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node *create_node(char *argv);
void free_list(node *head);

node *create_list(int argc, char **argv)
{
    node *head;
    node *temporary;

    head = NULL; 
    while (argc > 1)
    {
        temporary = create_node(argv[argc - 1]);
        if (temporary == NULL)
        {
            free_list(head);
            return (NULL);
        } 
        temporary->next = head;
        head = temporary;
        argc--;
    }
    return (head);
}

node *create_node(char *argv)
{
    node  *n;
    
    n = malloc(sizeof(node));
    if (!n)
        return(NULL);
    n->number = atoi(argv);
    n->next = NULL;
    return(n);
}

void free_list(node *head)
{
    node *temporary;

    while (head != NULL)
    {
        temporary = head->next;
        free (head);
        head = temporary;
    }
}

