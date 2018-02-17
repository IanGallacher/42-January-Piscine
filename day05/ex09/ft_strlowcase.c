/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:06:53 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 16:06:58 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** Convert a given string to lowercase.
*/

char	*ft_strlowcase(char *str)
{
	char *test;

	test = str;
	while (*test)
	{
		if (*test >= 'A' && *test <= 'Z')
		{
			*test += 32;
		}
		test++;
	}
	return (str);
}
