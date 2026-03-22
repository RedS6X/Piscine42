/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:57:44 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/09 16:34:32 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int	main(void)
{
	int test_a = 42;
	int test_b = 24;
	
	int *pointer_a;
	int *pointer_b;

	pointer_a = &test_a;
	pointer_b = &test_b;

	ft_swap(pointer_a, pointer_b);

	printf("%s %d \n", "A 42: ", *pointer_a);
	printf("%s %d \n", "B 24: ", *pointer_b);

	return 0;
}
*/
