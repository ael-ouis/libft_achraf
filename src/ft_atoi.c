#include "libft.h"

int    ft_atoi(const char *str)
{
    int i;
    int nb;
    int neg;

    i = 0;
    nb = 0;
    neg = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-')
        neg = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
        nb = nb * 10 + (str[i++] - '0');
    if (neg)
        return (-nb);
    return (nb);
}
