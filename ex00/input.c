/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 13:58:45 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/06 15:25:20 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4')
			{
				clues[j] = str[i] - '0';
				j++;
			}
			else
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (j == 16 && i == 31)
		return (1);
	return (0);
}
