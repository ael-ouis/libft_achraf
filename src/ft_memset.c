#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *tab;

	tab = str;
	while (n-- > 0)
		*tab++ = c;
	return (str);
}
