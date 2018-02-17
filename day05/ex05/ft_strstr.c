/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:17:54 by igallach          #+#    #+#             */
/*   Updated: 2018/01/16 14:35:50 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL 0

/*
** Description:
** A clone of c's strstr function.
*/

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	while (*str)
	{
		i = 0;
		while (str[i] && (to_find[i] == str[i] || to_find[i] == '\0'))
		{
			if (to_find[i] == '\0')
				return (str);
			++i;
		}
		++str;
	}
	return (NULL);
}
