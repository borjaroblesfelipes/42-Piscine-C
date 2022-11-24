/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:58:11 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 15:47:29 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power -1);
	return (nb);
}

/*
int	main(void)
{
	int	nb;
	int	power;

	power = 3;
	nb = 4;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_recursive_power(nb, power));
	nb = 0;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_recursive_power(nb, power));
	nb = 1;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_recursive_power(nb, power));
	nb = 11;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_recursive_power(nb, power));
	power = 0;
	nb = 0;
	printf("La potencia de %i a la %i es %i\n", nb,
		power, ft_recursive_power(nb, power));
}
*/