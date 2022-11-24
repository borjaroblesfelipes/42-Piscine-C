/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:11:10 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 11:38:05 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
 	int a;
    int b;
    int resultdiv;
    int resultmod;
    int *div;
    int *mod;

    a = 453;
    b = 13;
    div = &resultdiv;
    mod = &resultmod;
    ft_div_mod(a, b, div, mod);
    printf("El resultado entero de la división es %d\n", resultdiv);
	printf("El resultado del resto de la división es %d\n", resultmod);
}
*/
