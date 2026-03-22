/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   necesarias.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 06:12:00 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 17:00:07 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmall(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}
