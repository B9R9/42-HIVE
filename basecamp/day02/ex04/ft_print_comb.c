/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:36:43 by briffard          #+#    #+#             */
/*   Updated: 2021/07/09 04:34:58 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		ft_write_comb(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (d == '0')
	{
		if (a =='7' && b == '8' && c == '9')
		{
		}
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = '1';
		while (b <= '8')
		{
			c = '2';
			while (c <= '9')
			{
				ft_write_comb(a, b, c, '0');
				c++;
			}
			b++;
		}
		a++;
	}
}
