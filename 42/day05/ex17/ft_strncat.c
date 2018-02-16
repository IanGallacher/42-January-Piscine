/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:43:30 by igallach          #+#    #+#             */
/*   Updated: 2018/01/16 14:51:19 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** A clone of c's strncat function.
*/

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*current_loc;
	int		i;

	current_loc = dest;
	i = 0;
	while (*current_loc)
		current_loc++;
	while (*src && i < nb)
	{
		*current_loc++ = *src++;
		i++;
	}
	*current_loc = '\0';
	return (dest);
}
