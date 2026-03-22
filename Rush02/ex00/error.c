/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 03:12:57 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 03:17:45 by hfleites         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	dic_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}
