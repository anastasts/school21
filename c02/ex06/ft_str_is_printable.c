/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:03:05 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 22:08:38 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(str[i] > 32  && str[i] < 127)
		{
			return(1);
		}
		else 
		{
			return(0);
		}
		i ++;
	}
	return(1);
}


int main()
{
	char c[10] = "q111123";
	int  r = ft_str_is_numeric(c);
	printf("%d\n", r);
//	ft_putchar(&r);
	return 0;
}
