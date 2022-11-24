/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:16:28 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 11:38:23 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*
int main(void)
{
    int aa;
    int bb;
    int *a;
    int *b;

    aa = 789;
    bb = 102;
    a = &aa;
    b = &bb;
    ft_ultimate_div_mod(a, b);
    printf("La división es %d.\n", *a);
    printf("el resto es %d.\n", *b);
}
*/
