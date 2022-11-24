/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:58:11 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 15:50:14 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	resu;

	resu = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		resu = resu * (nb - 1);
		nb--;
	}
	return (resu);
}

/*
int	main(void)
{
	int	nb;

	nb = 4;
	printf("El factorial de %i es %i\n", nb, ft_iterative_factorial(nb));
	nb = 0;
	printf("El factorial de %i es %i\n", nb, ft_iterative_factorial(nb));
	nb = 1;
	printf("El factorial de %i es %i\n", nb, ft_iterative_factorial(nb));
	nb = 11;
	printf("El factorial de %i es %i\n", nb, ft_iterative_factorial(nb));
}
*/