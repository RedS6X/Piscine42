/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 04:50:23 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 06:21:47 by hfleites         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*number(int fb)
{
	char	c;
	char	buff[128];
	int		i;

	i = 0;
	while (read(fd, &c , 1) == 1)
	{
		if (c != ' ' && c != '\n')
			break;
	}
	while (c >= '0' && c <= '9')
	{
		if (i < 127)
		{
			buff[i] = c;
			i++;
		}
		if (read(fb, &c, 1) != 1)
			break;
	}
	buff[i] = '\0';
	while (c != ':')
	{
		if (read(fd, &c, 1) != 1)
			break;
	}
	return (ft_strmall(buff));
}

char	*character(int fd)
{
	char	c;
	char	buff[256];
	int		i;

	i = 0;
	while (read(fd, &c, 1) == 1)
	{
		if (c != ' ')
			break;
	}
	if (i < 255)
	{
		buffer[i] = c;
		i++;
	}
	while (read(fd, &c, 1) == 1)
	{
		if (c == '\n')
			break;
		if (i < 255)
		{
			buff[i] = c;
			i++;
		}
	}
	buff[i] = '\0';
	return (ft_strmall(buff))
}

t_list	*readdicc(char *file, int *size)
{
	int		fb;
	t_list	*tab;
	char	*nb;
	char	*val;

	fb = open(file, O_RDONLY);
	if (fb < 0)
		return (0);
	tab = malloc(sizeof(t_list) * 300);
	*size = 0;
	while (1)
	{
		nb = number(fb);
		if (!nb || nb[0] == 0)
		{	
			free(nb);
			break;
		}
		val = character(fb); //check que no pete lo mismo de arriba
		tab[*size].nb = nb;
		tab[*size].val = val //aqui falta depurar val
		(*size)++;
	}
	close(fb);
	return (tab);
}
