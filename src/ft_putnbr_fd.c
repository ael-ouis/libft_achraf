#include <unistd.h>

void    ft_putchar(char c, int fd)
{
    write(fd, &c, 1);
}
void    ft_putnbr_fd(int n, int fd)
{
    long i;
    
    i = n;
    if (i < 0)
    {
        ft_putchar('-', fd);
        i *= -1;
    }
    if (i > 9)
    {
        ft_putnbr_fd(i / 10, fd);
        ft_putnbr_fd(i % 10, fd);
    }
    else
    {
        ft_putchar(i + '0', fd);
    }
}