#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *first, char const *second)
{
	size_t	i;
	size_t	j;
	char	*join;

	join = malloc((ft_strlen(first) + ft_strlen(second) + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (first[i])
	{
		join[i] = first[i];
		i++;
	}
	j = 0;
	while (second[j])
	{
		join[i + j] = second[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
