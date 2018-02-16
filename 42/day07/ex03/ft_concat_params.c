/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:03:27 by igallach          #+#    #+#             */
/*   Updated: 2018/01/18 16:14:04 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Description:
** Count the length of a string, not counting the null terminator.
*/

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str++ != '\0')
		counter++;
	return (counter);
}

/*
** Description:
** A clone of c's strcpy function.
*/

char	*ft_strcpy(char *dest, char *src)
{
	char *cpy;

	cpy = dest;
	while (*src)
		*cpy++ = *src++;
	*cpy = '\0';
	return (dest);
}

/*
** Assignment Description:
** "A function that transforms arguments given as command-line into a single
** string of characters. Those arguments should be separated by a "\n"."
**
** Implementation Details:
** The variable 'i' starts at 1 in order to skip the first argument,
** the name of the command that is running.
** We only care about the passed parameters, not the name of the function.
** Add 1 to the variable 'total_len' to account for each new line character.
** Don't subtract 1 at the end because we add '\0' instead of '\n'.
*/

char	*ft_concat_params(int argc, char **argv)
{
	char	*combined_params;
	int		total_len;
	int		arg_index;
	int		char_index;
	int		i;

	arg_index = 1;
	total_len = 0;
	while (arg_index < argc)
		total_len += ft_strlen(argv[arg_index++]) + 1;
	combined_params = malloc(total_len);
	if (!combined_params)
		return (NULL);
	arg_index = 1;
	char_index = 0;
	while (arg_index < argc)
	{
		i = 0;
		while (i < ft_strlen(argv[arg_index]))
			combined_params[char_index++] = argv[arg_index][i++];
		combined_params[char_index++] = (++arg_index != argc) ? '\n' : '\0';
	}
	return (combined_params);
}
