/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:51:22 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/07 14:27:11 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	let;

	let = 'z';
	while (let >= 'a')
	{
		write (1, &let, 1);
		let--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
