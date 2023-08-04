/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:14:06 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 13:36:05 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(&data);
	else
	{
		temp = *begin_list;
		while (temp != NULL)
		{
			if (temp == 0)
				temp = ft_create_elem(&data);
			temp = temp->next;
		}
	}
}
