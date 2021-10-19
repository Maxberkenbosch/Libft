#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	new = malloc((ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	new[i] = '\0';
	return (new);
}
