#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	if (!(str = malloc(len * sizeof(char))))
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	return (str);
}
