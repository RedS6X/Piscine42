/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_force.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 18:13:15 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/15 18:57:05 by jruiz-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int **obs, int **ans);

int	duplicate(int **matrix, int num, int row, int col)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if ((matrix[row][i] == num) || (matrix[i][col] == num))
			return (1);
		++i;
	}
	return (0);
}

int	b_force(int **matrix_obs, int **matrix_ans, int row, int col)
{
	int		num;

	if (col == 4)
		return (b_force(matrix_obs, matrix_ans, row + 1, 0));
	if (row == 4)
		return (is_valid(matrix_obs, matrix_ans));
	num = 1;
	while (num <= 4)
	{
		if (!duplicate(matrix_ans, num, row, col))
		{
			matrix_ans[row][col] = num;
			if (b_force(matrix_obs, matrix_ans, row, col + 1))
				return (1);
			matrix_ans[row][col] = 0;
		}
		++num;
	}
	return (0);
}
