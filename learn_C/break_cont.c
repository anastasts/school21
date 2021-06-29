#include <stdio.h>

int main(void)
{
	int i;

	i = 15;
	while(i != 10)
	{
		if(i == 15)
		{
			printf("We are at the first if \n");
			i --;
			continue;
		}
		else
		{
			printf("We are at the else i = %d\n", i);
			i --;
		}
	}
	printf("We are here");
	return (0);

}
