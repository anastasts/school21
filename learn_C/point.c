#include <stdio.h>

int main()
{
	int y = 5;
	int* x = &y;

	*x = 42;
	printf("%d\n", y);
	return 0;
}
