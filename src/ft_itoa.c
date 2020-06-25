#include <stdlib.h>

int	ft_nbrlen(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	if (len)
		return (len);
	return (1);
}

char	*ft_itoa(int n)
{
	char *str;
	int i;

	i = ft_nbrlen(n) - 1;
	if (!(str = malloc(sizeof(char) * (ft_nbrlen(n) + 1))))
		return (NULL);
	str[ft_nbrlen(n)] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n = -n;
	while (str[i] != '-' && i >= 0)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
