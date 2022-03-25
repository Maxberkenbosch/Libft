#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	char	charc;
	int		strl;

	charc = c;
	strl = (ft_strlen(s) + 1);
	while (strl)
	{
		strl--;
		if (charc == *s)
			return ((char *)s);
		s++;
	}
	return (0);
}

int main()
{
	char *s = "balletjes";

	printf("%s", ft_strchr(s, 'b' + 256));
}