/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:48:42 by igallach          #+#    #+#             */
/*   Updated: 2018/01/13 18:54:32 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int test;

	test = 0;
	while (1)
	{
		if (test * test == nb)
			return (test);
		if (test * test > nb)
		{
			return (0);
		}
		if (test > 46340)
			return (0);
		test++;
	}
}