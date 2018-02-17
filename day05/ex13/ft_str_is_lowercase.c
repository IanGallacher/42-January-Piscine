/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:44:15 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 18:42:50 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** "a function that returns 1 if the string given as a parameter contains only
** lowercase alphabetical characters, and 0 if it contains any other character."
*/

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str > 122 || *str < 97)
			return (0);
		str++;
	}
	return (1);
}
