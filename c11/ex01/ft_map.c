#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void     ft_putchar(char c);

int	*ft_map(int	*tab, int length, int (*f)(int))
{
	int i = 0;
	int *array;

	array = (int *)malloc(sizeof(array) * length);
	if (array  == NULL)
		exit(1);
	while (i < length)
	{
        array[i] = f(tab[i]);
        ft_putchar('\n');
		i++;
	}
	return (array);
}

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return 0;
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
	return 0;
}

int main()
{
	int tab[] = {1345, 234, 23456, 123456789};
	ft_map(tab, 4, &ft_putnbr);
	return 0;
}
