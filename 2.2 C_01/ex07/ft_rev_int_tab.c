/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:19:53 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 11:58:45 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	y = size - 1;
	while (x < y)
	{
		c = tab[y];
		tab[y] = tab[x];
		tab[x] = c;
		x++;
		y--;
	}
}
/*
void array_printer(int a[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[size - 1]);
}

int	main (void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size;
	
	size = 5;

	printf("in: ");
	array_printer(tab, size);
	
	ft_rev_int_tab(tab, size);

	printf("out: ");
	array_printer(tab, size);
}
*/
