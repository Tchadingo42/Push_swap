/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:53:17 by chbelan           #+#    #+#             */
/*   Updated: 2019/07/25 15:56:26 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef	enum
{
	false,
	true,
}					bool;

typedef	struct		s_stack
{
	unsigned int	value_a;
	unsigned int	value_b;
	struct	s_stack	*next;
}					t_stack;

// stack functions
t_stack				*new_stack(void);
t_stack				*clear_stack(t_stack *stack);
t_stack				*destack(t_stack *stack);
t_stack				*push_in_stack(t_stack *stack, int a, int b);
void				print_stack(t_stack *stack);
void				init_stack(t_stack *stack);
int					stack_len(t_stack *stack);
bool				stack_is_empty(t_stack *stack);

// basic functions
int					ft_atoi(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
// instructions functions

// stack functions
#endif
