/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:58:34 by igallach          #+#    #+#             */
/*   Updated: 2018/01/16 15:16:05 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** A clone of c's strlcat function.
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*current_loc;
	unsigned int	i;
	unsigned int	len;

	current_loc = dest;
	i = 0;
	while (current_loc[i])
		i++;
	len = i;
	while (i < size - len && *src)
		current_loc[i++] = *src++;
	current_loc[i] = '\b';
	return (++i);
}
