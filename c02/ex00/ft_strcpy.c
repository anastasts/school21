/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:01:58 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 18:52:18 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


/*функция копирования*/
char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return(dest);
}


void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
		printf("%c\n",str[i]);
	}
	printf("%d\n", i);
	write(1, str, i);
}


int main()
{
	char *str= "hello";
	char str2[6];
	ft_strcpy(str2, str);
	ft_putstr(str2);

	return 0;
}
