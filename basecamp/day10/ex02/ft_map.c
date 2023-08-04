/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:26:16 by briffard          #+#    #+#             */
/*   Updated: 2021/07/20 04:57:57 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	arr = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (arr);
}
