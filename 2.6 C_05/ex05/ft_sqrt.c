/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:49:18 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 09:37:30 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	resu;

	resu = 1;
	if (nb > 0)
	{
		while (resu * resu <= nb)
		{
			if (resu * resu == nb)
				return (resu);
			else if (resu >= 50000)
				return (0);
			resu++;
		}
	}
	return (0);
}

/*
int	main(void)
{
	int	nb;

	nb = 25563136;
	printf("La raiz cuadrada de %i es %i\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("La raiz cuadrada de %i es %i\n", nb, ft_sqrt(nb));
	nb = 1;
	printf("La raiz cuadrada de %i es %i\n", nb, ft_sqrt(nb));
	nb = 11;
	printf("La raiz cuadrada de %i es %i\n", nb, ft_sqrt(nb));
}
*/