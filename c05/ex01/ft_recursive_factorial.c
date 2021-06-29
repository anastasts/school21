/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viellie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:29:55 by viellie           #+#    #+#             */
/*   Updated: 2021/06/16 12:38:17 by viellie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	return nb * ft_recursive_factorial(nb-1);
}

int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return 0;	
}
