/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:40:23 by igallach          #+#    #+#             */
/*   Updated: 2018/01/17 20:50:33 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_newline(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_swap(char **key, int i, int j)
{
	char *temp;

	temp = key[i];
	key[i] = key[j];
	key[j] = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_selection_sort(char **arr)
{
	int i;
	int smallest_num_index;
	int max;
	int search_index;

	i = 1;
	smallest_num_index = 0;
	while (arr[i])
		max = ++i;
	i = 1;
	while (i < max - 1)
	{
		smallest_num_index = i;
		search_index = i + 1;
		while (search_index < max)
		{
			if (ft_strcmp(arr[search_index], arr[smallest_num_index]) < 0)
				smallest_num_index = search_index;
			search_index++;
		}
		ft_swap(arr, smallest_num_index, i);
		i++;
	}
}

int		main(int args, char **argv)
{
	int i;

	i = 1;
	ft_selection_sort(argv);
	while (i < args)
		ft_putstr_newline(argv[i++]);
	return (0);
}
