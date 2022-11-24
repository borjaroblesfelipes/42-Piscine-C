/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:29:20 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 09:37:09 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_fibonacci(int index)
{
	int	resu;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		resu = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
		return (resu);
	}
	else
		return (-1);
}

/*
int	main(void)
{
	printf("El fibonacci en la posición 7  es %i\n", ft_fibonacci(7));
	printf("El fibonacci en la posición -1 es %i\n", ft_fibonacci(-1));
	printf("El fibonacci en la posición 0 es %i\n", ft_fibonacci(0));
	printf("El fibonacci en la posición 1 es %i\n", ft_fibonacci(1));
	printf("El fibonacci en la posición 17 es %i\n", ft_fibonacci(17));
}
*/