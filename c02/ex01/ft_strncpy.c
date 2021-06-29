/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:44:26 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 19:41:13 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


/*Функция копирования*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while ( i != n)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return(dest);
}


void	ft_putstr(char *str, unsigned int n)
{
	write(1, str, n);
}


int main()
{
	char *str1= "Hello";
	unsigned int n = 0;
	char str2[n];

	ft_strncpy(str2, str1, n);
	ft_putstr(str2, n);

	return 0;
}

