/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 19:13:14 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 21:01:31 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] > 64 && str[i] < 91)
		{
			return(1);
		}
		if(str[i] > 96 && str[i] < 123)
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
	char c[10] = "qwe1234";
	int  r = ft_str_is_alpha(c);
	printf("%d\n", r);
//	ft_putchar(&r);
	return 0;
}
