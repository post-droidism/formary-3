#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	i = 0;
	array = malloc(sizeof(int) * (diff));
	if (array == NULL)
	{
		return (-1);
	}
	*range = array;
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (diff);
}
