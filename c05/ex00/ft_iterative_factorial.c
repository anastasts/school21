/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:15:21 by viellie           #+#    #+#             */
/*   Updated: 2021/06/15 20:54:02 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
    int k = 0;

	n = 1;
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	else 
	{
		 while (nb != 0)
		 {
		 	n*nb = n;
			nb --;
		 }
	}
	return n;
}

int main()
{
	printf("%d\n", ft_iterative_factorial(3));
	return 0;
}
