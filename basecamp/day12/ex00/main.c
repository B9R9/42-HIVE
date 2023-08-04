/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:40:28 by briffard          #+#    #+#             */
/*   Updated: 2021/07/22 11:07:04 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_display_file.h"

int		main(int argc, char *argv[])
{
	int fd;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "open() Failed.\n", 16);
		return (0);
	}
	ft_display_file(fd);
	if (close(fd) == -1)
	{
		write(1, "close() Failed.\n", 16);
		return (0);
	}
	return (0);
}
