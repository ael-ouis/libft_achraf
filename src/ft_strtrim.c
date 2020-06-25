#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int len;
    char *trim;
    
    i = 0;
    j = 0;
  while (s1[i])
    {
        if(s1[i] == set[j])
            j++;
        i++;
    }
    len = ft_strlen(s1) - j;
    if (!(trim = malloc(len * sizeof(int))))
        return (NULL);
    i = 0;
    j = 0;
    while (j < len)
    {
        while (s1[i] == set[j])
            i++;
        trim[j] = s1[i];
        i++;
        j++;
    }
    return (trim);
}
