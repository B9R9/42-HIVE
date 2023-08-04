/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 06:50:34 by briffard          #+#    #+#             */
/*   Updated: 2021/07/20 16:09:45 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			result++;
		i++;
	}
	return (result);
}
