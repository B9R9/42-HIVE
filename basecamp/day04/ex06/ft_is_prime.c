/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 06:07:35 by briffard          #+#    #+#             */
/*   Updated: 2021/07/10 06:53:04 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
