/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:45:11 by igallach          #+#    #+#             */
/*   Updated: 2018/01/13 22:14:54 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	if (index < 0)
		return (-1);
	if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (1);
}
