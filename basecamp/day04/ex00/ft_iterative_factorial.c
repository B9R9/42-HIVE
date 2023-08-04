/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:56:23 by briffard          #+#    #+#             */
/*   Updated: 2021/07/11 16:23:48 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int x;

	i = 1;
	x = 1;
	if (nb <= 0 || nb > 12)
	{
		return (0);
	}
	while (i <= nb)
	{
		x *= i;
		i++;
	}
	return (x);
}


int 
long long int 