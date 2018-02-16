/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:24:11 by igallach          #+#    #+#             */
/*   Updated: 2018/01/18 20:16:48 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Description:
** A clone of c's strcpy function.
*/

char	*ft_strcpy(char *dest, char *src)
{
	char *cpy;

	cpy = dest;
	while (*src)
		*cpy++ = *src++;
	*cpy = '\0';
	return (dest);
}

/*
** Description:
** A clone of c's strdup function.
**
** Implementation Details:
** len starts at 1 instead of 0 in order to account for the null terminator.
*/

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 1;
	while (src[len])
		len++;
	cpy = (char *)malloc(len);
	if (!cpy)
		return (0);
	return (ft_strcpy(cpy, src));
}
