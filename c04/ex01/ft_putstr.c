/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:31:02 by viellie           #+#    #+#             */
/*   Updated: 2021/06/14 19:21:45 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
//	printf("%d", i+1);
	write(1, str, i+1);
}

int main(void)
{
	char s[] = "cvbn";
	ft_putstr(s);
	return 0;
}
