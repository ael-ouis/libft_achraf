#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *cpy_dest;
	const char *cpy_src;

	cpy_dest = dest;
	cpy_src = src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n--)
		*cpy_dest++ = *cpy_src++;
	return (dest);
}
