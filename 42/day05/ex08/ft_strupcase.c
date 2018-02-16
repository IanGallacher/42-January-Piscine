/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:09:57 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 16:10:00 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** Convert a given string to uppercase.
*/

char	*ft_strupcase(char *str)
{
	char *test;

	test = str;
	while (*test)
	{
		if (*test >= 'a' && *test <= 'z')
		{
			*test -= 32;
		}
		test++;
	}
	return (str);
}
