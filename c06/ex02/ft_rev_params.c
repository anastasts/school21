#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	int a;

	a = argc - 1;
	while (a != 0)
	{
		ft_putstr(argv[a]);
		ft_putstr("\n");
		a --;
	}
	return (0);
}
