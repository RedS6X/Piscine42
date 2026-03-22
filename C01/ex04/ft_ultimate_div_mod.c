/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:37:07 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/09 20:25:33 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*divmem;
	int	*divmod;
	
	divmem = &a;
	divmod = &b;

	a = 23;
	b = 5;

	ft_ultimate_div_mod(divmem, divmod);
	printf("Divmem: %d \nDivmod: %d", *divmem, *divmod);
}
*/
