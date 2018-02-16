/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:28:08 by igallach          #+#    #+#             */
/*   Updated: 2018/01/26 15:03:54 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

/*
** Assignment Description:
** Create a function which allocates a new element. It should initialise its
** item to the argument’s value, and all other elements to 0.
** The created node’s address is returned.
*/

t_btree		*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = malloc(sizeof(t_btree));
	if (elem)
	{
		elem->left = NULL;
		elem->right = NULL;
		elem->item = item;
	}
	return (elem);
}
