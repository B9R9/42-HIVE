/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:14:06 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 07:27:21 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void printlist(node_t *head);
t_list		*ft_create_elem(int *data);

t_list		*ft_create_elem(int *data)
{
	t_list *liste;

	liste = malloc(sizeof(*liste));
	if (liste == NULL)
		return (0);
	liste->data = data;
	liste->next = NULL;
	
	return (liste);
}

// void		ft_list_push_back(t_list **begin_list, void *data)
// {
	
void printlist(node_t *head)
{
	node_t *temp = head;
	while(temp != NULL)
	{
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int main (void)
{
	t_list *head;
	t_list *temp;

/*Creer et ajoute un element au debut*/
	temp = ft_create_elem(32);
	head=temp;
	temp= ft_create_elem(8);
	temp->next=head;
	temp = ft_create_elem(34);
	head = temp;

	printlist(head);
}