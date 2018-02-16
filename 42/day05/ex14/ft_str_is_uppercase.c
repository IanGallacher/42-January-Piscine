/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:38:22 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 18:41:04 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** "A function that returns 1 if the string given as a parameter contains only
** uppercase alphabetical characters, and 0 if it contains any other character."
*/

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str > 90 || *str < 65)
			return (0);
		str++;
	}
	return (1);
}
