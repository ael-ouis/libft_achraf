#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(str = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
