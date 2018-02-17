/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:32:55 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 18:35:50 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** "A function that returns 1 if the string given as a parameter contains only
** alphabetical characters, and 0 if it contains any other character."
*/

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 122
		|| (*str < 97 && *str > 90))
			return (0);
		str++;
	}
	return (1);
}
