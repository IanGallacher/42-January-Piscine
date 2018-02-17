/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:42:49 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 18:44:40 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char current_letter;

	current_letter = 'z';
	while (current_letter >= 'a')
	{
		ft_putchar(current_letter);
		current_letter -= 1;
	}
}
