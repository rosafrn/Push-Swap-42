/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:28 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 20:44:09 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    node *stacks[2];
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

    stacks[0]= create_list(argc, argv);
    stacks[1] = NULL;

    // If there is not enough space to create the linked list
    // return Error 
    if (stacks[0] == NULL)
    {
        printf("Error\n");
        return (0);
    }

    sort(stacks);

     // PRINT TO DEDUG
    printf("    STACK a\n");
    temporary = stacks[0];
    while (temporary != NULL)
    {
        printf("number is :%d and order is this : %d\n", temporary->number, temporary->order);
        temporary = temporary->next;
    }
    printf("    STACK b\n");
    temporary = stacks[1];
    while (temporary != NULL)
    {
        printf("number is :%d and order is this : %d\n", temporary->number, temporary->order);
        temporary = temporary->next;
    }

    //return (1);
}