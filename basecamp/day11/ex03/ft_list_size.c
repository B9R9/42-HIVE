/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 08:18:43 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 09:55:19 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_list_size(t_list *begin_list)
{
	t_list			*temp;
	int				size;

	begin_list = temp;
	size = 0;
	if (begin_list == NULL)
		return (size);
	else
	{
		while (temp != 0)
		{
			size++;
			temp = temp->next;
		}
		return (size);
	}
}
