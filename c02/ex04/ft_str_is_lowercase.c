/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:27:40 by viellie           #+#    #+#             */
/*   Updated: 2021/06/12 21:33:45 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] > 96  && str[i] < 122)
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
	char c[10] = "wertyuio";
	int  r = ft_str_is_numeric(c);
	printf("%d\n", r);
//	ft_putchar(&r);
	return 0;
}

