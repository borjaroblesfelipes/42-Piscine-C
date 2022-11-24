/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:35:32 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 09:57:27 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*
int	main(void)
{
    int aa;
    int bb;
    int *a;
    int *b;

	aa = 9999;
	bb = 0000;
	a = &aa;
	b = &bb;
    ft_swap(a, b);
    printf(" El valor de aa era 9999 y ahora es %d\n", aa);
	printf(" El valor de bb era 0000 y ahora es %d\n", bb);  
}
*/
