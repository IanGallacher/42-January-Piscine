/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:36:06 by igallach          #+#    #+#             */
/*   Updated: 2018/01/23 19:50:00 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Assignment Description:
** For a given ints array, apply a function on all elements of the array
** (in order) and returns a array of all the return values. This function will
** be applied following the array’s order.
*/

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = -1;
	result = malloc(sizeof(int) * length);
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}
