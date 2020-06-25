#include <stddef.h>

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    if (!(to_find[i]) || to_find == 0)
        return ((char *)s);
    while (s[i] && i < len)
    {
        j = 0;
        while (s[i + j] == to_find[j] && (i + j) < len)
        {
            if (!(to_find[j + 1]))
                return ((char *)&s[i]);
            j++;
        }
        i++;
    }
    return (0);
}
