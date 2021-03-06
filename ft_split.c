#include "libft.h"
static int	ft_word_counter(char const *s, char c);

static int	ft_alloc(char **Array, char *s, int a, char c);

static void	ft_free(char **Array, int a);

char	**ft_split(char const *s, char c)
{
	char	**Array;
	int		a;

	if (!s)
		return (0);
	Array = malloc ((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (!Array)
		return (0);
	a = 0;
	a = ft_alloc(Array, (char *)s, a, c);
	Array[a] = NULL;
	return (Array);
}

static int	ft_alloc(char **Array, char *s, int a, char c)
{
	size_t	len;
	int		i;
	int		strl;

	len = 0;
	i = 0;
	strl = ft_strlen(s);
	while (strl > i)
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i + len] != c && s[i + len])
				len++;
			Array[a] = ft_substr(s, i, len);
			if (!Array[a])
				ft_free(Array, a);
			i += len;
			a++;
		}
		len = 0;
	}
	return (a);
}

static int	ft_word_counter(char const *s, char c)
{
	int			i;
	int			counter;
	const char	*pc;

	counter = 0;
	pc = &c;
	i = 0;
	if (!s || *s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			counter++;
		}
		i++;
	}
	if (counter != 0 && s[0] != c)
		counter++;
	if (counter == 0 && s[i] == '\0' && s[i - 1] != c)
		counter++;
	return (counter);
}

static void	ft_free(char **Array, int a)
{
	while (a > 0)
	{
		free(Array[a]);
		a--;
	}
	free(Array);
}
