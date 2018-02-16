/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:32:15 by igallach          #+#    #+#             */
/*   Updated: 2018/01/16 14:52:42 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** A clone of c's strcat function.
*/

char	*ft_strcat(char *dest, char *src)
{
	char *current_loc;

	current_loc = dest;
	while (*current_loc)
		current_loc++;
	while (*src)
		*current_loc++ = *src++;
	*current_loc = '\0';
	return (dest);
}
