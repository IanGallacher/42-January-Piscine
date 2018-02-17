/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:46:56 by igallach          #+#    #+#             */
/*   Updated: 2018/01/11 15:05:08 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** Assignment Description:
** "A function that displays a string of characters on the standard output."
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
