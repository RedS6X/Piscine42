#include <fcntl.h>
#include <unistd.h>
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	c = nb % 10 + '0';
	write (1, &c, 1);
}

int	ft_count_file_bytes(char *filename)
{
        int     fd;
        int     read_b;
        char    tmp[256];
        int     read_bytes;

	read_bytes = 0;
	read_b = 256;
	fd = open(filename, O_RDONLY);
	while ((read_b = read(fd, tmp, read_b)) > 0)
	{
		read_bytes = read_bytes + read_b;
		write(1, tmp, read_b);
	}
	close(fd);
	return(read_bytes);
}

char	*ft_read_file(char *filename)
{
	int	fd;
	int	read_b;
	int	read_bytes;
	char    *file = malloc(ft_count_file_bytes(filename));
	
	read_bytes = 0;
	read_b = 256;
		if (!file)
		return (NULL);
	fd = open(filename, O_RDONLY);
	while ((read_b = read(fd, file + read_bytes, read_b)) > 0)
	{
		read_bytes = read_bytes + read_b;
	}
	file[read_bytes] = '\0';
	close(fd);
	return(file);
}

int	ft_count_lines(char *filename)
{
        int     fd;
        int     read_b;
        char    tmp[1];
        int     read_bytes;
	int	i;

	i = 0;
	read_b = 1;
	fd = open(filename, O_RDONLY);
	while ((read_b = read(fd, tmp, read_b)) > 0)
	{
		if (tmp[0] == '\n')
		i++;
	}
	close(fd);
	return(i);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
	write(2, "Usage: ./program <filename>\n", 27);
	return (1);
	}
	ft_count_file_bytes(argv[1]);
	ft_count_lines(argv[1]);
	return (0);
}
