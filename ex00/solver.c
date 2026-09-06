/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 20:16:12 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/06 21:37:04 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_all(int grid[4][4], int *clues);
int	check(int grid[4][4], int row, int col, int num);

int	solve(int grid[4][4], int *clues, int row, int col)
{
	int	num;

	if (row == 4)
		return (check_all(grid, clues));
	if (col == 4)
		return (solve(grid, clues, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (check(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, clues, row, col + 1) == 1)
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
