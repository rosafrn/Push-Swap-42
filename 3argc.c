/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:52:42 by rosferna          #+#    #+#             */
/*   Updated: 2022/03/15 20:54:08 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void sort(node **stacks, int argc)
{
    node *last_a;

    //get_order(&stacks[0], argc);
    //get_order(&stacks[1], argc);
    get_max(&stacks[0]);
    get_min(&stacks[0]);

    eval_cost(&stacks[0], argc);
    
    while (check_order_a(&stacks[0]) != 1)
    {
        last_a = get_last(&stacks[0]);

        // 2 1 3
        if ((stacks[0]->order - 1) == stacks[0]->next->order && stacks[0]->order < last_a->order)
        {
            sa(stacks);
            continue ;
        }

        // 1 3 2
        else if ((stacks[0]->order + 1) == last_a->order && last_a->order == (stacks[0]->next->order - 1))
        {
            sa(stacks);
            ra(stacks);
            continue ;
        }

        // 2 3 1
        else if (stacks[0]->order == (last_a->order + 1) && stacks[0]->order < stacks[0]->next->order)
        {
            rra(stacks);
            continue ;
        }

        // 3 2 1
        else if (stacks[0]->order == (last_a->order + 1) && check_order_a(&stacks[0]->next) == 1)
        {
            ra(stacks);
            continue ;
        }

        // 3 2 1
        else if (stacks[0]->order == (stacks[0]->next->order + 1) && (stacks[0]->next->order == last_a->order + 1))
        {
            sa(stacks);
            rra(stacks);
            continue ;   
        }  
}*/