char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (!(c) && !(*s))
		return ((char *)s);
	return (0);
}
