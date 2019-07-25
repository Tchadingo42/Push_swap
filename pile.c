/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:15:50 by chbelan           #+#    #+#             */
/*   Updated: 2019/07/23 17:18:35 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define pile_donnee(stack) stack->start->data
#include "pile.h"
/* set t_pile var */
void		init_pile(t_pile *stack)
{
	stack->size = 0;
	stack->start = NULL;
}

int		push_to_stack(t_pile *stack, char *data)
{
	t_list	*new_elem;

	if ((new_elem =(t_list*)malloc(sizeof(t_list))) == NULL)
		return (-1);
	if ((new_elem->data =(char *)malloc(27 * sizeof(char))) == NULL)
		return (-1);
	strcpy(new_elem->data, data);
	new_elem->next = stack->start;
	stack->start = new_elem;
	stack->size++;
	return (1);
}

int			destack(t_pile *stack)
{
	t_list	*destroy_elem;

	if (stack->size == 0)
		return (-1);
	destroy_elem = stack->start;
	stack->start = stack->start->next;
	free(destroy_elem->data);
	free(destroy_elem);
	stack->size--;
	return (1);
}

void		print_pile(t_pile *stack)
{
	t_list	*current;
	int		i;

	current = stack->start;
	i = 0;
	while (i < stack->size)
	{
		printf("%s\n", current->data);
		current = current->next;
		i++;
	}
}

int		main(void)
{
	t_pile	*stack;
	char	*name;
	char	tmp[27];

	if ((stack = (t_pile *)malloc(sizeof(t_pile))) == NULL)
		return (-1);
	if ((name = (char *)malloc(27 *sizeof(char))) == NULL)
		return (-1);
	init_pile(stack);
	printf("enter a word ");
	scanf ("%s", name); 
	push_to_stack (stack, name);
    printf ("La pile (%d éléments): \n",stack->size);
    printf("\n********** Haut de la PILE **********\n");
    print_pile(stack); printf("__________ Bas de la PILE __________\n\n");
    printf ("Entrez un mot : ");
    scanf ("%s", name);
	push_to_stack (stack, name);
    printf ("La pile (%d éléments): \n",stack->size);
    printf("\n********** Haut de la PILE **********\n");
	print_pile(stack); printf("__________ Bas de la PILE __________\n\n");
    printf ("Entrez un mot : ");
    scanf ("%s", name); 
	push_to_stack (stack, name);
    printf ("La pile (%d éléments): \n",stack->size);
    printf("\n********** Haut de la PILE **********\n");
    print_pile(stack);
    printf("__________ Bas de la PILE __________\n\n");
    printf ("\nLe dernier entré (LastInFirstOut) [ %s ] sera supprimé", pile_donnee(stack));
    printf ("\nLe dernier entré est supprime\n");
    destack (stack); /* suppression de dernier element entre */ printf ("La pile (%d éléments): \n",stack->size);
    printf("\n********** Haut de la PILE **********\n"); 
	print_pile(stack); 
	printf("__________ Bas de la PILE __________\n\n");
    return (0);
}
