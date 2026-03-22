/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 02:34:36 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 04:17:23 by hfleites         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	int_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	arg_check(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2 && !(int_check(argv[1])))
		return (0);
	if (argc == 3 && !(int_check(argv[2])))
		return (0);
	return (1);
}

int	dic_check(int argc, char **argv)
{
	int	fd;
	char	buf[128];
	int	read_bytes;
	int	readed;

	readed = read(fd, buf, read_bytes);
	if (argc == 2)
		fb = open(argv[1], O_RDONLY);
	if (argc == 3)
		fb = open(argv[2], O_RDONLY);
	if (fb == -1)
		return (0);
	while (readed > 0)
		read_bytes += readed;
	if (read_bytes <= 0)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}
