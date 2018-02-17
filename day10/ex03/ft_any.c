/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:50:20 by igallach          #+#    #+#             */
/*   Updated: 2018/01/23 19:51:05 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** Create a function which will return 1 if, passed to the function f, at least
** one element of the array returns 1. Else, it should return 0.
*/

int		ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
