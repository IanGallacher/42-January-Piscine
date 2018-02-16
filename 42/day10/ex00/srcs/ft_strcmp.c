/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:03:09 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/16 18:08:04 by tmatthew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	char first;
	char second;

	first = *s1;
	second = *s2;
	while (first == second)
	{
		first = *s1++;
		second = *s2++;
		if (*s1 == '\0')
			return (first - second);
	}
	return (first - second);
}
