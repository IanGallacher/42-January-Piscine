/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:13:21 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 18:45:30 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char first_num;
	char second_num;
	char third_num;

	first_num = '0' - 1;
	while (++first_num <= '9')
	{
		second_num = '0' - 1;
		while (++second_num <= '9')
		{
			third_num = '0' - 1;
			while (++third_num <= '9')
			{
				if (first_num < second_num && second_num < third_num)
				{
					ft_putchar(first_num);
					ft_putchar(second_num);
					ft_putchar(third_num);
					if (first_num != '7')
						ft_print_comma();
				}
			}
		}
	}
}
