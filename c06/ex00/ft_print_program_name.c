#include <unistd.h>

void ft_putchar(char c)
{
	 write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while(argv[0][count] != '\0')
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	return 0;
}
