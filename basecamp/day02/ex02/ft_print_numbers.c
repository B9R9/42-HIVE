/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:12:55 by briffard          #+#    #+#             */
/*   Updated: 2021/07/08 07:12:39 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
	ft_putchar('\n');
}
