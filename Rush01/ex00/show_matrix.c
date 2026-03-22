/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 21:20:14 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/15 14:15:04 by jruiz-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	show_matrix(int **matrix)
{
	int		i;
	int		j;
	char	text;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			text = matrix[i][j] + '0';
			write(1, &text, 1);
			if (j != 3)
				write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}
