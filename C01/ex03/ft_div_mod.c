/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:24:46 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/09 19:31:43 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div1;
	int	mod2;

	div1 = a / b;
	mod2 = a % b;
	*div = div1;
	*mod = mod2;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*divmemory;
	int	*divmod;
	
	divmemory = &div;
	divmod = &mod;
	
	a = 23;
	b = 5;
	ft_div_mod(a, b, divmemory, divmod);
	printf("Divmod: %d \nDivmemory: %d", *divmod, *divmemory);
}
*/
