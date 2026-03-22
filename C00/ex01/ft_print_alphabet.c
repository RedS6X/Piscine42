/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:26:21 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/07 14:23:17 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	let;

	let = 'a';
	while (let <= 'z')
	{
		write (1, &let, 1);
		let++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
