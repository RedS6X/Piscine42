/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:17:32 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/15 21:24:36 by jruiz-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (input[i] < '1' || input[i] > '4')
				return (0);
		}
		else
		{
			if (input[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
