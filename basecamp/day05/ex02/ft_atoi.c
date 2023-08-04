/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 07:49:23 by briffard          #+#    #+#             */
/*   Updated: 2021/07/16 12:02:37 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool		check_if(char c, char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')
	{
		if (c == a[x])
			return (true);
		x++;
	}
	return (false);
}

int			ft_atoi(char *str)
{
	int i;
	int result;
	int neg_num;

	result = 0;
	neg_num = 1;
	i = 0;
	while (check_if(str[i], "\t\n\v\f\r "))
		i++;
	while (check_if(str[i], "+-"))
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			i++;
		neg_num *= -1;

	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		if (check_if(str[i + 1], "+-"))
			break ;
		i++;
	}
	return (result * neg_num);
}
