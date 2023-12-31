/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reversestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 08:49:07 by briffard          #+#    #+#             */
/*   Updated: 2022/09/29 13:17:58 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap(char *a, char *b)
{
	char	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

char	*ft_reverse_str(char *str)
{
	int	index;
	int	max;
	int	i;
	int	x;

	i = 0;
	x = 1;
	index = 1;
	max = ft_strlen(str);
	while (index < max)
	{
		i = 0;
		while (i < (max - x) && str[i + 1] != '\0')
		{
			swap (&str[i], &str[i + 1]);
			i++;
		}
		x++;
		index++;
	}
	return (str);
}
