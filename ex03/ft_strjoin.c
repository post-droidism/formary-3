#include <stdlib.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*final_strs;

	j = 0;
	n = 0;
	final_strs = (char *)malloc(sizeof(strs));
	if (final_strs == NULL)
	{
		return (0);
	}
	while (n < size)
	{
		i = 0;
		while (strs[n][i] != '\0')
			final_strs[j++] = strs[n][i++];
		i = 0;
		while (sep[i] != '\0' && n != size - 1)
			final_strs[j++] = sep[i++];
		n++;
	}
	final_strs[j] = '\0';
	return (final_strs);
}
