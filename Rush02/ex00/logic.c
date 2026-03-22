/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:20:25 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 13:04:28 by hfleites         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//aqui voy a poner las funciones que buscan y ensamblan el numero de entrada 

#include "ft.h"
char	*get_val(char *key)
{

}
char	ft_999(char *tres)
{
	int h
}
void	conv_numb(char *nbr)
{
	int	len;
	int	g1_size;
	int	i;
	int	n_group;
	int	size;
	char	group[4];

	len = ft_strlen(nbr);
	i = 0;
	g1_size = len % 3;
	if (g1_size == 0)
		g1_size = 3;
	n_group = (len-1) / 3;
	while (i < len)
	{
		
	}
}
