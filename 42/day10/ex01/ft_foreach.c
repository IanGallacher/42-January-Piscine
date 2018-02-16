/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:22:40 by igallach          #+#    #+#             */
/*   Updated: 2018/01/23 19:26:49 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** For a given ints array, applies a function on all elements of the array.
** This function will be applied following the array’s order.
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
