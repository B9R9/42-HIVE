/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:24:53 by briffard          #+#    #+#             */
/*   Updated: 2021/07/16 16:42:04 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

enum e_list{
  true = 1,
  false = 0  
};
#define EVEN(nbr)  nbr%2 ==0
#define t_bool bool
#define TRUE true
#define FALSE false
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an od number of arguments.\n"
#define SUCCESS 0

#endif

