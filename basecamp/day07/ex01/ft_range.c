/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:56:33 by briffard          #+#    #+#             */
/*   Updated: 2021/07/15 11:47:20 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int diff;
	int *arr;
	int i;

	i = 0;
	diff = max - min;
	arr = (int*)malloc(sizeof(int) * (diff - 1));
	if (arr == NULL)
		return (0);
	while (i < diff)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
