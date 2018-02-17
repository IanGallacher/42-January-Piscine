/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:52:55 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 19:10:04 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
** Description:
** Similar to c's itoa function.
** Give ft_ptnbr a integer, and it will print it to the console.
*/

void	ft_putnbr(int nb)
{
	int offset;
	int start_printing_flag;
	int current_int;
	int sign;

	if (nb < 0)
		ft_putchar('-');
	sign = nb < 0 ? -1 : 1;
	if (nb == 0)
		ft_putchar('0');
	offset = 1000000000;
	start_printing_flag = 0;
	while (offset > 0)
	{
		if (offset == 1000000000)
			current_int = nb / offset;
		else
			current_int = (nb % (offset * 10)) / (offset);
		offset /= 10;
		if (current_int != 0)
			start_printing_flag = 1;
		if (start_printing_flag)
			ft_putchar('0' + current_int * sign);
	}
}
