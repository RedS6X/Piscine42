/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 20:03:49 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/25 13:56:55 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	fact;

	res = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (fact <= nb)
	{
		res = res * fact;
		fact++;
	}
	return (res);
}
/*
int	main(void)
{

	ft_iterative_factorial(5);
	return (0);
}
*/
