/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:41:35 by briffard          #+#    #+#             */
/*   Updated: 2021/07/22 16:22:01 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_cat.h"

void		ft_display_file(int fd)
{
	char buf[30];

	while (read(fd, buf, 1))
	{
		write(1, buf, 1);
	}
}
