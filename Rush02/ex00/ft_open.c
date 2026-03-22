#include <fcntl.h>
#include <unistd.h>
/*
void	ft_open(char *filename)
{
	int	fd;
	int	read_b;
	char	file[700];
	int	read_bytes;

	read_bytes = 0;
	read_b = 256;
	fd = open(filename, O_RDONLY);
	while ((read_b = read(fd, file, read_b)) > 0)
	{
		write(1, file, read_b);
		read_bytes = read_bytes + read_b;
	}
	close(fd);	
*/
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
		read_bytes = read_bytes + read_b; // read_bytes += read_b
	}
	close(fd);
		printf("Readed bytes: %d\n", read_bytes);
	return(read_bytes);
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
	printf("Linebreaks: %d", i);
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
