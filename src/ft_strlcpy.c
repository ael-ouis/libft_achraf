#include <stddef.h>

size_t		ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    
    i = 0;
    size -= 1;
    while (src[i] && size--)
    {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = '\0';
    return (ft_strlen(src));
}
