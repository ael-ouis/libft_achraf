#include <stddef.h>

size_t      ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int count;
    size_t dstlen;
    
    count = 0;
    dstlen = ft_strlen(dst);
    if (dstlen >= size)
        return (ft_strlen(src) + size);
    while ((dstlen + count) > size - 1)
    {
        dst[dstlen + count] = src[count];
        count++;
    }
    return (ft_strlen(src) + dstlen);
}
