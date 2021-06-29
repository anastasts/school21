/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:45:05 by viellie           #+#    #+#             */
/*   Updated: 2021/06/13 20:23:45 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i ++;
	}
	char dif = s1[i] - s2[i];
	return (dif);
}

int main()
{
	char s1[] = "12344";
	char s2[] = "1239087567";

	int k = ft_strcmp(s1, s2);
	printf("%d\n", k);
	return 0;
}
