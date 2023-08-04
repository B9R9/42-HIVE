/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 05:29:57 by briffard          #+#    #+#             */
/*   Updated: 2021/07/16 15:10:49 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *str)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	dest = (char*)malloc(sizeof(char) * length + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
