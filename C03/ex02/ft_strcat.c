/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:55:51 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/16 20:24:51 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_len = i;
	i = 0;
	while (src[i] != '\0')
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

	ft_strcat(dest, src);
	//printf("%s, \n %s", dest, src);
}
*/
