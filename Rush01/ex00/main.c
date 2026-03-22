/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 21:20:01 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/15 21:21:29 by jruiz-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	show_matrix(int **matrix_ans);
int		valid_input(char *input);
int		b_force(int **matrix_obs, int **matrix_ans, int row, int col);

void	matrix_input(int **matrix, char *str)
{
	int		j;
	int		i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = str[(i * 8) + (j * 2)] - '0';
			++j;
		}
		++i;
	}
}

int	**init(void)
{
	int		i;
	int		j;
	int		**matrix;

	i = 0;
	matrix = malloc(4 * 8);
	while (i < 4)
	{
		matrix[i] = malloc(4 * 4);
		++i;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			++j;
		}
		++i;
	}
	return (matrix);
}

void	apply_free(int **matrix)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		++i;
	}
	free(matrix);
}

int	main(int argc, char **argv)
{
	int		**matrix_obs;
	int		**matrix_ans;

	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (!valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	matrix_obs = init();
	matrix_input(matrix_obs, argv[1]);
	matrix_ans = init();
	if (b_force(matrix_obs, matrix_ans, 0, 0))
		show_matrix(matrix_ans);
	else
		write(1, "Error\n", 6);
	apply_free(matrix_ans);
	apply_free(matrix_obs);
}
