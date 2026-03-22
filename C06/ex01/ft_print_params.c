/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:49:14 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/18 19:24:34 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (*argv && argc > 1)
	{
		while (**argv != '\0' && **argv != 0)
		{
			write(1, &**argv, 1);
			(*argv)++;
		}
		argv++;
		write (1, "\n", 1);
	}
}
