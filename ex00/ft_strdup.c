#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*duplicate;
	int		i;

	i = 0;
	duplicate = malloc(sizeof(*src));
	if (duplicate == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
