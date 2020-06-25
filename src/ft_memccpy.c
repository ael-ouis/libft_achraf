#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, size_t n)
{
	char		*cpy_dest;
	const char	*cpy_src;

	cpy_dest = dest;
	cpy_src = src;
	if (dest == 0 || src == 0)
		return (0);
	while (n-- > 0)
		*cpy_dest++ = *cpy_src++;
	return (dest);
}
