#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cpy_dest;
	const char	*cpy_src;

	cpy_dest = dest;
	cpy_src = src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (cpy_dest < cpy_src)
		while (n-- > 0)
			*cpy_dest++ = *cpy_src++;
	else
	{
		cpy_dest += n - 1;
		cpy_src += n - 1;
		while (n-- > 0)
			*cpy_dest-- = *cpy_src--;
	}
	return (dest);
}
