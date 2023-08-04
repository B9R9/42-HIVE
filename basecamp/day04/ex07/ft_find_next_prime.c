/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 06:56:25 by briffard          #+#    #+#             */
/*   Updated: 2021/07/10 07:30:12 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	int x;
	int count;

	i = 1;
	x = 1;
	count = 0;
	while (i <= nb)
	{
		x = nb % i;
		i++;
		if (x == 0)
			count++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (x != 1)
	{
		x = ft_is_prime(nb + i);
		i++;
	}
	return (nb + (i - 1));
}
