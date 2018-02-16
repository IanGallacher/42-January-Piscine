/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:18:03 by igallach          #+#    #+#             */
/*   Updated: 2018/01/16 14:30:26 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment Description:
** "A function that returns 1 if the string given as a parameter contains only
** printable characters, and 0 if it contains any other character."
*/

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
