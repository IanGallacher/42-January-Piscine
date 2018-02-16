/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:58:01 by igallach          #+#    #+#             */
/*   Updated: 2018/01/13 22:17:14 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		orig_nb;

	orig_nb = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power > 0)
		nb *= orig_nb;
	return (nb);
}
