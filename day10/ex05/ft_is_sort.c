/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 17:02:33 by igallach          #+#    #+#             */
/*   Updated: 2018/01/23 19:51:24 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** A function which returns 1 if the array is sorted and 0 if it isn’t.
** Note: The array can be sorted in ascending or descending order.
*/

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	if (length == 0)
		return (1);
	i = 0;
	while (i < (length - 1) && f(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < (length - 1) && f(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == length - 1)
		return (1);
	return (0);
}
