/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:35:24 by briffard          #+#    #+#             */
/*   Updated: 2022/01/06 01:52:49 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*DEFINE*/
# define BUFF_SIZE 8
# define FD_SIZE 4096

/*INCLUDES*/
# include"libft.h"

/*PROTOTYPES*/
int	get_next_line(const int fd, char **line);

#endif
