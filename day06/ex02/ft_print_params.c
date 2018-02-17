/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:15:31 by igallach          #+#    #+#             */
/*   Updated: 2018/01/17 14:44:28 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_newline(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int args, char **argv)
{
	int i;

	i = 1;
	while (i < args)
		ft_putstr_newline(argv[i++]);
	return (0);
}
