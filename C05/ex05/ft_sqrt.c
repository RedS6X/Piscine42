/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:19:10 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/25 17:53:04 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (res <= nb / res)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
int	main(void)
{
	ft_sqrt(49);
}
*/
