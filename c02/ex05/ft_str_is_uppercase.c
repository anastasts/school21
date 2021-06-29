/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:35:22 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 21:51:37 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;
    
	while (str[i] != '\0')
	{
		if(str[i] > 64  && str[i] < 91)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
		i ++;
	}
	return(1);
}


int main()
{
	char c[10] = "QWERTY";
	int  r = ft_str_is_numeric(c);
	printf("%d\n", r);
//	ft_putchar(&r);
	return 0;
}


