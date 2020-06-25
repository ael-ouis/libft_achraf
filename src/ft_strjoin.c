#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strjoin(const char *s1, const char *s2)
{
    int len;
    char *s3;
    int i;
    int j;
    
    i = 0;
    j = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    if (!(s3 = malloc(len * sizeof(int))))
	    return (NULL);
    while (s1[i])
    {
        s3[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        s3[i] = s2[j];
        j++;
        i++;
    }
    return (s3);
}
