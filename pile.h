/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:15:58 by chbelan           #+#    #+#             */
/*   Updated: 2019/07/23 15:07:48 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PILE_H
#define PILE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef	struct		s_list
{
	char			*data;
	struct	s_list	*next;
}					t_list;

typedef	struct		s_pile
{
	int				size;
	unsigned int	data;
	struct	s_list	*start;
}					t_pile;

typedef	struct		s_con
{
	unsigned int	value_a;
	unsigned int	value_b;
	struct	s_con	start;
}					t_container;

void        init_pile(t_pile *stack);
char        *ft_strpy(char *dest, char *src);
int         push_to_stack(t_pile *stack, char *data);
int         destack(t_pile *stack);
void        print_pile(t_pile *stack);

#endif
