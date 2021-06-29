#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str	!= '\0')
	{
		count++;
		str++;
	}
	return (count);
}


int	ft_count_if(char	**tab, int length, int	(*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if(f(tab[i]) != 0)
			count++;
		i++;
	}
	return count;
}

int main()
{
	char *tab[] = {"", "", "", ""};
	printf("%d\n", ft_count_if(tab, 4, &ft_strlen));
	return 0;
}
