/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:39:13 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/06 21:40:21 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	clean_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	check(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (grid[row][i] == num)
			return (0);
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
