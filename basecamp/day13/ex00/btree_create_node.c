/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 06:27:47 by briffard          #+#    #+#             */
/*   Updated: 2021/07/24 15:54:52 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item);
t_btree				*btree_create_node(void *item)
{
	t_btree *tr;

	tr = malloc(sizeof(*tr));
	tr->item = item;
	tr->right = NULL;
	tr->left = NULL;
	return (tr);
}


int    main()
{
    t_btree    *ptr;
    t_btree    *ptr2;


    ptr = btree_create_node((int*)42);
    ptr2 = btree_create_node("Maneki Neko");


    printf("%s, %d\n", (char*) ptr2->item, (int) ptr->item);

    return(0);
}