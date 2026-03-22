/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:04:28 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/15 18:14:37 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_vis(int a, int b, int c, int d)
{
	int	row[4];
	int	i;
	int	max;
	int	count;

	row[0] = a;
	row[1] = b;
	row[2] = c;
	row[3] = d;
	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (row[i] > max)
		{
			count++;
			max = row[i];
		}
		i++;
	}
	return (count);
}

int	is_valid(int **obs, int **ans)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((ft_vis(ans[i][0], ans[i][1], ans[i][2], ans[i][3]) != obs[2][i]))
			return (0);
		if ((ft_vis(ans[i][3], ans[i][2], ans[i][1], ans[i][0]) != obs[3][i]))
			return (0);
		if ((ft_vis(ans[0][i], ans[1][i], ans[2][i], ans[3][i]) != obs[0][i]))
			return (0);
		if ((ft_vis(ans[3][i], ans[2][i], ans[1][i], ans[0][i]) != obs[1][i]))
			return (0);
		i++;
	}
	return (1);
}
