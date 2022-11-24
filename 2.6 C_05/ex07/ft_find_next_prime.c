/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:18:43 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 09:44:41 by brobles-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*
int	main(void)
{
	int	nb;

	nb = 4;
	printf("El número %i es primo, sino busca el próximo %i\n",
		nb, ft_find_next_prime(nb));
	nb = 0;
	printf("El número %i es primo, sino busca el próximo %i\n",
		nb, ft_find_next_prime(nb));
	nb = -89;
	printf("El número %i es primo, sino busca el próximo %i\n",
		nb, ft_find_next_prime(nb));
	nb = 89;
	printf("El número %i es primo, sino busca el próximo %i\n",
		nb, ft_find_next_prime(nb));
}
*/