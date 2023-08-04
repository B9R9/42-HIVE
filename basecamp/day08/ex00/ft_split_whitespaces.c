/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 05:09:22 by briffard          #+#    #+#             */
/*   Updated: 2021/07/16 12:00:52 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool		check_if(char c, char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')
	{
		if (c == a[x])
			return (true);
		x++;
	}
	return (false);
}

int main(void)
{
	char src[] = " Bonjour les gens comment ca va";
	// char *fisrt;
	int i;
	int x;
	int length;
	int count; //length of the word

	
	length = 0;
	x = 0;
	while (src[x] != '\0')
	{
		length++;
		x++;
	}
	i = 0;
	while (check_if(src[i], "\t\n\v\f\r "))
		i++;
	count  = 0;
	while( i <=length)
	{
		if ((src[i] == ' ' )||( src[i] == '\t' )|| (src[i] == '\n')||(src[i] == '\0'))
		{
			printf("There is a word of %d letters\n", count);
			count  = 0;// initialisation to count lenght of word
			
			i++;
		}
		else
		{
			i++;
			count++;
		}
	}
	// printf("Total de mot dans la string est de %d\n", count);
}