/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:29:37 by chbelan           #+#    #+#             */
/*   Updated: 2019/07/25 19:22:17 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack			*new_stack(void)
{
	return (NULL);
}

bool			stack_is_empty(t_stack *stack)
{
	if (stack == NULL)
		return (true);
	return (false);
}

t_stack			*push_in_stack(t_stack *stack, int a, int b)
{
	t_stack		*element;

	element = malloc(sizeof(t_stack*));
	if (element == NULL)
		return (NULL);
	element->value_a = a;
	element->value_b = b;
	element->next = stack;
	return (element);
}

int					stack_len(t_stack *stack)
{
	int				len;

	len = 0;
	while (!(stack_is_empty(stack)))
	{
		len = len + 1;
		stack = stack->next;
	}
	return (len);
}

void				print_stack(t_stack *stack)
{
	if (stack_is_empty(stack))
	{
		return ;
	}
	while (!stack_is_empty(stack))
	{
		printf("a ->[%d]\n", stack->value_a);
		if (stack->value_b > 0)
			printf("b ->[%d]\n", stack->value_b);
		stack = stack->next;
	}
}
