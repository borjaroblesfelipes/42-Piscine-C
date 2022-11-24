/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:58:11 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 15:57:15 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	resu;

	resu = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		resu = nb * resu;
		power--;
	}
	return (resu);
}

/*
int	main(void)
{
	int	nb;
	int	power;

	power = 3;
	nb = 4;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_iterative_power(nb, power));
	nb = 0;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_iterative_power(nb, power));
	nb = 1;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_iterative_power(nb, power));
	nb = 11;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_iterative_power(nb, power));
	power = 0;
	nb = 0;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_iterative_power(nb, power));
}
*/