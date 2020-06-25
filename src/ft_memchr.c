#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *src = s;

	while (n-- > 0)
		if (*src++ == c)
			return ((void*)--src);
	return (NULL);
}
