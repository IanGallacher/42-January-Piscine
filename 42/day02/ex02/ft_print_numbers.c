/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:50:16 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 18:44:56 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char current_number;

	current_number = '0';
	while (current_number <= '9')
	{
		ft_putchar(current_number);
		current_number += 1;
	}
}
