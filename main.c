/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:40:42 by chbelan           #+#    #+#             */
/*   Updated: 2019/07/25 19:21:40 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int				main(void)
{
	t_stack		*stack;

	stack = new_stack();
	if (stack_is_empty(stack))
	{
		printf("step 1 stack empty\n");
	}
	if (!stack_is_empty(stack))	
	stack = push_in_stack(stack, 2, 8);
	stack = push_in_stack(stack, 4, 2);
	stack = push_in_stack(stack, 7, 3);
	print_stack(stack);
//	clear_stack(stack);
//	free(stack);
	return (0);
}
