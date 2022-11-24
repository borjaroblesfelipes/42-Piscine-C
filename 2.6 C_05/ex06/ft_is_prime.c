/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:18:43 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 09:38:04 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= (nb / 2))
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}

/*
int	main(void)
{
	int	nb;

	nb = 4;
	printf("El número %i es primo (1=si/0=no) %i\n", nb, ft_is_prime(nb));
	nb = 0;
	printf("El número %i es primo (1=si/0=no) %i\n", nb, ft_is_prime(nb));
	nb = -89;
	printf("El número %i es primo (1=si/0=no) %i\n", nb, ft_is_prime(nb));
	nb = 2147483647;
	printf("El número %i es primo (1=si/0=no) %i\n", nb, ft_is_prime(nb));
}
*/