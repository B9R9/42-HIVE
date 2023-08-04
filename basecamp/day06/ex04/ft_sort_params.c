/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:01:05 by briffard          #+#    #+#             */
/*   Updated: 2021/07/14 17:23:57 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_params(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void		swap_argument()  
{
	// va faire le swap des argument str[i] = str
}
char		ft_sort_params()
{
	//comparaison ave la asii pour mettre du pluspetit au plus grand 
	
	
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		argv[i]; 
		
		ft_putchar('\n');
		i++;
	}
	return (0);
}

