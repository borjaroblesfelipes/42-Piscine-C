/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:17:11 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 13:32:43 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while (((s1[ind]) || (s2[ind])) && (ind < n))
	{	
		if (s1[ind] > s2[ind])
			return (1);
		else if (s1[ind] < s2[ind])
			return (-1);
		ind++;
	}
	return (0);
}	

/*
#include<stdio.h>
int	main(void)
{
	char			s1[22];
	char			s2[22];
	unsigned int	n;

	n = 6;
	printf("Introduce s1: \n");
	scanf("%s", s1);
	printf("Introduce s2: \n");
	scanf("%s", s2);
	printf("El número de valores a comparar: \n");
	printf("%u.\n", n);
	printf("1 s1>s2,-1 s1<s2,0 s1=s2.  %d.\n", ft_strncmp(s1, s2, n));
}
*/
