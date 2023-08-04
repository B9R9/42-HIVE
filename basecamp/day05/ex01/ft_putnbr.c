/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 06:13:48 by briffard          #+#    #+#             */
/*   Updated: 2021/07/19 16:30:14 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		
	}
	else if (nb > -2147483648 && nb <= 2147483647)
	{
		if (nb >= 0 && nb < 10)
			ft_putchar(48 + nb);
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(((-nb + nb) + -nb));
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

void		ft_putnbr(int nb);
void		ft_putchar(char c);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	
	// ft_putnbr(1);
	// ft_putnbr(-89952);
	// ft_putnbr(985651);
	ft_putnbr(-2147483648);

	

	return (0);
}
