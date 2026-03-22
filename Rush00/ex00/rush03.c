/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmatas- <crmatas-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:47:46 by crmatas-          #+#    #+#             */
/*   Updated: 2026/03/08 20:17:02 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_condition(int row, int col, long int x, long int y)
{
	{
		if ((col == 1) && (row == y || row == 1))
			return ('A');
		if (col == x && (row == 1 || row == y))
			return ('C');
		if (row == 1 || row == y || col == 1 || col == x)
			return ('B');
	}
	return (' ');
}

void	rush(long int x, long int y)
{
	int		row;
	int		col;
	char	c;

	if (x <= 0 || y <= 0 || x > 2147783647 || y > 2147783647)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			c = ft_condition(row, col, x, y);
			ft_putchar(c);
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}
