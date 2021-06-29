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


int	ft_any(char	**tab, int	(*f)(char*))
{
	while (*tab!= '\0')
	{
		if(f(*tab) != 0)
			return(1);
		tab++;
	}
	return 0;
}

int main()
{
	char *tab[] = {"", "", "", "", 0};
	printf("%d\n", ft_any(tab, &ft_strlen));
	return 0;
}
