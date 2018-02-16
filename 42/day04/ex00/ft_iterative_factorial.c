/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:40:35 by igallach          #+#    #+#             */
/*   Updated: 2018/01/12 11:47:26 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int return_val;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return_val = nb;
	while (nb > 1)
		return_val *= --nb;
	return (return_val);
}
