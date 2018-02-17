/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:38:57 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 16:40:49 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** "A function that returns 1 if the string given as a parameter contains only
** digits, and 0 if it contains any other character."
*/

int		ft_str_is_numberic(char *str)
{
	while (*str)
	{
		if (*str < 48 && *str > 57)
			return (0);
	}
	return (1);
}
