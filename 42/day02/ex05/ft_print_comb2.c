/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:32:17 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 18:45:42 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
** Functionality:
** Displays all different COMBINATIONS (not permutations) of two digits
** between 00 and 99, listed by ascending order.
**
** Implementation notes:
** We count to 9999, and print the number with a space in between.
** There is one catch:
** The first two digits can never be greater or equal to the second two.
** counter / 100 gives the first two digits.
** counter % 100 gives the second two digits.
*/

void	ft_print_comb2(void)
{
	char	*ascii_table;
	int		counter;

	ascii_table = "0123456789";
	counter = -1;
	while (++counter <= 9999)
	{
		if (counter / 100 >= counter % 100)
			continue;
		ft_putchar(ascii_table[counter / 1000]);
		ft_putchar(ascii_table[(counter % 1000) / 100]);
		ft_putchar(' ');
		ft_putchar(ascii_table[(counter % 100) / 10]);
		ft_putchar(ascii_table[counter % 10]);
		if (counter != 9899)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
