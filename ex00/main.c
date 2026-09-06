/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 21:38:32 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/06 21:41:52 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *str, int *clues);
void	clean_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int		solve(int grid[4][4], int *clues, int row, int col);

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (parse_input(argv[1], clues) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	clean_grid(grid);
	if (solve(grid, clues, 0, 0) == 1)
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
