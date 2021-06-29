#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int dif;

	i = 0;
	dif = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i ++;
	}
	dif = s1[i] - s2[i];
	if (s1[i+1] == '\0' || s2[i+1] == '\0')
		dif = s1[i+1] - s2[i+1];
	return (dif);
}

void swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write (1, str, i);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}	
	return 0;
}
