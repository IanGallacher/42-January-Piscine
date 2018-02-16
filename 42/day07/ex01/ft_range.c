/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:34:47 by igallach          #+#    #+#             */
/*   Updated: 2018/01/18 20:17:03 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Assignment Description:
** "A function ft_range which returns an array ofints. This int array should
** contain all values between min and max."
**
** Implementation Details:
** When using malloc, multiply (max-min) by 4.
** 4 is the number of bytes in an int.
*/

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	if (min >= max)
		return (NULL);
	i = 0;
	dest = (int*)malloc((max - min) * 4);
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
