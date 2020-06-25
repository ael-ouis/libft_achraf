#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	if (!(tab = malloc(sizeof(size) * nmemb)))
		return (NULL);
	ft_memset(tab, 0, nmemb);
	return (tab);
}
