#include <unistd.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int , int))
{
	int i;
	int p, m, z = 0;
	i = 0;
	while (i < length - 1)
	{
        if (f(tab[i], tab[i + 1]) > 0)
			p++;
		if(f(tab[i], tab[i + 1]) < 0)
			m++;
		if(f(tab[i], tab[i + 1]) == 0)
			z++;
		i++;
	}
	if ((p + z == length - 1) || (m + z == length - 1) || (z == length - 1))
		return (1);
	return (0);
}

int	ft_intcmp(int t1, int t2)
{
	return (t1 - t2);
}

int main()
{
	int tab[] = {3, 2, 1, 0};
	printf("%d\n", ft_is_sort(tab, 4, &ft_intcmp));
	return (0);
}
