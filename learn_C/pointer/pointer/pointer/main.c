#include <unistd.h>
#include <stdio.h>

void    ft_foreach(int    *tab, int length, void    (*f)(int))
{
    int i = 0;
    while (tab[i] != '\0')
    {
        f(tab[i]);
        i++;
    }
}

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return ;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar('0' + nbr);
    }
}

int main()
{
    int tab[] = {1345, 234, 23456, 123456789};
    ft_foreach(tab, 0, &ft_putnbr);
    return 0;
}

