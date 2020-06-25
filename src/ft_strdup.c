#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(const char *str)
{
    int i;
    int len;
    char *cpy;
    
    i = 0;
    len = ft_strlen(str);
    if(!(cpy = malloc(len * sizeof(char))))
        return (0);
    while (str[i])
    {
        cpy[i] = str[i];
        i++;
    }
    return (cpy);
}
