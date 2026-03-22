#include <unistd.h>

int	freemalloc(int *matrix, int a)
{
	int i;
	int j;

	i = 0;
	while (i<a)
	{
		j = 0;
		while (j<a)
		{
			if (matrix[i][j] != 0)
				j++;
			else
			{
				*row= i;
				*col=j;
				return(1);
			}
			j++;
		}
		i++;
	}
	return (0)
}
