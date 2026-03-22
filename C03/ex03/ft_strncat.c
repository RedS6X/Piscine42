/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:09:08 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/17 16:25:02 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_len = i;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[10] = "Hola";
	char	src[6] = "Mundo";
	unsigned int	nb = 6;

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
}
*/
