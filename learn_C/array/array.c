#include <stdio.h>

int main()
{
	char c_1[] = "1234567\0";
	char *c_2 = "1234567\0";
	int i;
	char *c_3 = c_1;
	i = 0;


	// c_1
	printf("Выводим с_1:\n");
	while (c_1[i] != '\0')
	{
		printf("%c\n", c_1[i]);
		i++;
	}

	// c_2
	printf("Выводим  c_2:\n");
	while (*c_2)
	{
		printf("%c\n", *c_2);
		c_2++;
	}

	// c_3
	printf("Выводим с_3:\n");
	while (*c_3)
	{
		printf("%c\n", *c_3++);
	}
	return (0);
}
