/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:12:37 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 13:53:48 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char current_letter;

	current_letter = 'a';
	while (current_letter <= 'z')
	{
		ft_putchar(current_letter);
		current_letter += 1;
	}
}
