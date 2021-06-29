#include <stdio.h>

int fct(char c)
{
	printf("%c\n", c);
	return 0;
}

int main(void)
{
	int (*ptr)(char);//указатель на функцию

	ptr = fct; //присваиваем указателю имя функции, то есть мы в явном виде не вызываем функцию
	ptr('T');
	return 0;
}
