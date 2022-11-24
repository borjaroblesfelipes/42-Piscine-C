/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:59:54 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 13:12:09 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	a;

	x = 0;
	while ((x + 1) < size)
	{
		while (tab[x] > tab[x + 1])
		{
			a = tab[x + 1];
			tab[x + 1] = tab[x];
			tab[x] = a;
			if (x == 0)
			{
				x++;
			}
			else
			{
				x--;
			}	
		}
	x++;
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
	int tab[] = {4, 15, 2, 18, 7, 9, 6, 1};
	int size;
	
	size = 8;

	printf("in: ");
	array_printer(tab, size);
	
	ft_sort_int_tab(tab, size);

	printf("out: ");
	array_printer(tab, size);
}
*/
