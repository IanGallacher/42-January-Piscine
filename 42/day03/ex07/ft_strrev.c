/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:48:46 by igallach          #+#    #+#             */
/*   Updated: 2018/01/12 16:19:38 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str++ != '\0')
		counter++;
	return (counter);
}

char	*ft_strrev(char *str)
{
	int		str_len;
	int		count;
	char	temp;

	str_len = ft_strlen(str);
	count = -1;
	while (++count < str_len / 2)
	{
		temp = str[count];
		str[count] = str[(str_len - count) - 1];
		str[str_len - count - 1] = temp;
	}
	return (str);
}
