/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:31:45 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 13:58:32 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
