/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:55:55 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/06 21:07:56 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left(int grid[4][4], int row, int clue)
{
	int	i;
	int	count;
	int	highest;

	i = 0;
	count = 0;
	highest = 0;
	while (i <= 3)
	{
		if (grid[row][i] > highest)
		{
			highest = grid[row][i];
			count++;
		}
		i++;
	}
	if (count == clue)
		return (1);
	return (0);
}

int	check_row_right(int grid[4][4], int row, int clue)
{
	int	i;
	int	count;
	int	highest;

	i = 3;
	count = 0;
	highest = 0;
	while (i >= 0)
	{
		if (grid[row][i] > highest)
		{
			highest = grid[row][i];
			count++;
		}
		i--;
	}
	if (count == clue)
		return (1);
	return (0);
}

int	check_col_down(int grid[4][4], int col, int clue)
{
	int	i;
	int	count;
	int	highest;

	i = 3;
	count = 0;
	highest = 0;
	while (i >= 0)
	{
		if (grid[i][col] > highest)
		{
			highest = grid[i][col];
			count++;
		}
		i--;
	}
	if (count == clue)
		return (1);
	return (0);
}

int	check_col_up(int grid[4][4], int col, int clue)
{
	int	i;
	int	count;
	int	highest;

	i = 0;
	count = 0;
	highest = 0;
	while (i <= 3)
	{
		if (grid[i][col] > highest)
		{
			highest = grid[i][col];
			count++;
		}
		i++;
	}
	if (count == clue)
		return (1);
	return (0);
}

int	check_all(int grid[4][4], int *clues)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (!(check_col_up(grid, i, clues[i])))
			return (0);
		if (!(check_col_down(grid, i, clues[4 + i])))
			return (0);
		if (!(check_row_left(grid, i, clues[8 + i])))
			return (0);
		if (!(check_row_right(grid, i, clues[12 + i])))
			return (0);
		i++;
	}
	return (1);
}
