/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahnidyy- <ahnidyy-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:01:08 by ahnidyy-          #+#    #+#             */
/*   Updated: 2026/03/16 16:54:56 by ahnidyy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int     main(void)
{
        char *s1;
        char *s2;
        int a=3;
        s1 = "abcd";
        s2 = "abcszzzabcd";

	int result =       ft_strncmp(s1, s2, a);
        printf("%s,\n %s, %d", s1, s2, result);
}
*/
