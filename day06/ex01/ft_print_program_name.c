/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:58:04 by igallach          #+#    #+#             */
/*   Updated: 2018/01/17 20:49:09 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	return (0);
}
