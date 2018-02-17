/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:44:53 by igallach          #+#    #+#             */
/*   Updated: 2018/01/15 11:57:52 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** Given a *strng, str, find the next character that is not whitespace.
*/

char	*next_non_whitespace_char(char *str)
{
	while ((*str == '\n') || (*str == '\t') || (*str == '\v') ||
			(*str == ' ') || (*str == '\f') || (*str == '\r'))
		str++;
	return (str);
}

/*
** Description:
** A clone of c's atoi function.
*/

int		ft_atoi(char *str)
{
	int return_val;
	int negative;

	return_val = 0;
	negative = 0;
	str = next_non_whitespace_char(str);
	if (*str == '-')
		negative = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		return_val *= 10;
		return_val += (int)(*str - '0');
		str++;
	}
	if (negative == 1)
		return (-return_val);
	else
		return (return_val);
}
