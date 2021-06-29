#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return 0;
	if (power ==  0 && nb == 0)
		return 1;
	if
	else 
	{
		while (power != 0)
		{
			n = n * nb;
			power --;
		}
	}
	return n;
}

int main()
{
	printf("%d\n", ft_iterative_power(5, 0));
	return 0;
}
