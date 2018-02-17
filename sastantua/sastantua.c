/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 09:49:12 by igallach          #+#    #+#             */
/*   Updated: 2018/01/20 20:09:22 by igallach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
** Description:
** Output one line (not block) of the pyramid. Ends with new line.
**
** Parameters:
** len: how long the block needs to be, including slashes.
** spacing: how many spaces are to the left of the pyramid. Use for centering.
** door_half_width: HALF the width of the door, rounded down, if it has one.
** has_handle: If not 0, draw a door with a handle.
*/

void	draw_line(int len, int spacing, int door_half_width, int has_handle)
{
	int		mid;

	mid = len / 2 - 1;
	while (spacing-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	len -= 2;
	while (len-- > 0)
	{
		if (len == mid - door_half_width + 2 && has_handle)
			ft_putchar('$');
		else if (len > (mid - door_half_width)
		&& len < (mid + door_half_width))
			ft_putchar('|');
		else
			ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

/*
** Description:
** Outputs the number of characters at the base of the sastantua pyramid.
**
** Parameters:
** size: the number of blocks on the pyramid.
**
** Implementation notes:
** Width of the bottom layer: size - 1 + lin_sum + 2 * row_sum + comp
** int comp = ((size-1)%2) * (size / 2);
** int lin_sum = (((size+2)*(size+3))/2)-3;
** int row_sum = ((((size - 1) / 2) * ((size - 1) / 2 + 1)) / 2);
** dividing by 2 usually takes advantage of integer division to execute every
** other line. Don't get too clever if you want to simplify!
**
** comp comes into play every other block. We make the assumtion that we sum
** a set of numbers and multiply by 2, because we increment every other
** block. There may be a number without a pair at the end. That's comp.
*/

int		pyramid_base_width(int size)
{
	int		comp;
	int		lin_sum;
	int		row_sum;
	int		base_width;

	comp = ((size - 1) % 2) * (size / 2);
	lin_sum = (((size + 2) * (size + 3)) / 2) - 3;
	row_sum = ((((size - 1) / 2) * ((size - 1) / 2 + 1)) / 2);
	base_width = (size - 1 + lin_sum + (2 * row_sum) + comp);
	return (base_width);
}

/*
** Description:
** Draw one block of the pyramid.
** Will automatically add door, if necessary if block == size.
**
** Parameters:
** line_half_width: current additional width of half of a line of the pyramid.
** base_width: width of the base of the pyramid. Used for centering lines.
**             This will be the same for every block. Don't calc it ourselves.
** size: same as the size parameter that gets passed to sastantua.
** block: the block we are currently drawing. Start counting at 1.
*/

void	draw_block(int *line_half_width, int base_width, int size, int block)
{
	int		row;
	int		block_height;
	int		door_half_width;

	row = 1;
	block_height = 3 + block;
	door_half_width = (size - 1) / 2 + 1;
	while (row++ < block_height)
	{
		if (block == size
		&& (row - 2) % block_height >= 2 + block - (door_half_width * 2 - 1))
		{
			if ((row - 2) % block_height == (2 + block) - door_half_width
			&& block > 4)
				draw_line(*line_half_width * 2 + 3,
				base_width - *line_half_width - 1, door_half_width, 1);
			else
				draw_line(*line_half_width * 2 + 3,
				base_width - *line_half_width - 1, door_half_width, 0);
		}
		else
			draw_line(
			*line_half_width * 2 + 3, base_width - *line_half_width - 1, 0, 0);
		++(*line_half_width);
	}
}

/*
** Description:
** Draws a cool looking pyramid with a door.
**
** Parameters:
** size: The number of blocks the pyramid has.
**
** Rules of the pyramid: (simplified)
** Separate the pyramid into blocks.
** An offset of *'s, starting at two, is what each pyramid block stands on.
** That offset grows by one every other line.
** Every block is one line higher than the previous.
** Every block is centered on the one below.
** Draw a cool door on the bottom most block.
*/

void	sastantua(int size)
{
	int		block;
	int		line_half_width;
	int		offset;
	int		base_width;

	block = 0;
	line_half_width = 0;
	offset = 4;
	base_width = pyramid_base_width(size);
	while (block++ < size)
	{
		draw_block(
		&line_half_width,
		base_width,
		size,
		block);
		line_half_width += (offset / 2);
		++offset;
	}
}
