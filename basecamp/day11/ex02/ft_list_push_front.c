/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 08:09:48 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 09:51:33 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	temp->next = begin_list;
	begin_list = temp;
}
