/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:36:52 by briffard          #+#    #+#             */
/*   Updated: 2021/07/22 17:21:37 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void		ft_display_file(int fd);

int			main(int argc, char *argv[])
{
	int i;
	int fd;

	fd = 0;
	if (argc == 0)
		write(1, "Error!", 7);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			write(1, "open() Failed\n", 14);
		ft_display_file(fd);
		if (close(fd) == -1)
			write(1, "close() Failed\n", 15);
		i++;
	}
	return (0);
}
