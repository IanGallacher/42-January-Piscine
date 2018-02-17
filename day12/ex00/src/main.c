/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:43:55 by igallach          #+#    #+#             */
/*   Updated: 2018/01/25 19:56:23 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char	buffer[69];
	int		bytes_read;

	while ((bytes_read = read(fd, &buffer, 69)))
		write(1, &buffer, bytes_read);
}

int		main(int argc, char **argv)
{
	int	fd;

	if (argc > 2)
		if (write(2, "Too many arguments.\n", 20) || 1)
			return (1);
	if (argc < 2)
		if (write(2, "File name missing.\n", 19) || 1)
			return (1);
	fd = open(argv[1], O_RDONLY);
	display_file(fd);
	close(fd);
	return (0);
}
