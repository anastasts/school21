#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	int a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putstr("\n");
		a++;
	}
	return (0);
}
