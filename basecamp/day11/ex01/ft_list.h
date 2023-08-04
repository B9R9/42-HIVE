/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:48:10 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 09:48:27 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list			*next;
	void					*data;
}					t_list;

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);
#endif
