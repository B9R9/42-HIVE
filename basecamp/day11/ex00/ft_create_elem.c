/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:06:50 by briffard          #+#    #+#             */
/*   Updated: 2021/07/21 08:50:54 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *liste;

	liste = malloc(sizeof(*liste));
	if (liste == NULL)
		return (0);
	liste->next = NULL;
	liste->data = data;
	return (liste);
}
