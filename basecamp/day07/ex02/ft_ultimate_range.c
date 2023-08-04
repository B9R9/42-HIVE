/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:01:17 by briffard          #+#    #+#             */
/*   Updated: 2021/07/16 15:20:28 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *ptr;

	len = max - min;

	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(int) * len);
	if (*range == NULL)
		return (0);
	i = 0;
	ptr = *range;
	while (i < len)
	{
		*ptr++ = min++;
		i++;
	}
	
	return ((int)(lenght));
}

