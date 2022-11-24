/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:25:32 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 15:40:55 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	temp;

	temp = 0;
	while ((src[temp] != '\0') && (temp < n))
	{
		dest[temp] = src[temp];
		temp++;
	}
	while (temp < n)
	{
		dest[temp] = '\0';
		temp++;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned int	n;
	char			dest[10];
	char			src[10];

	n = 6;
	printf("Introduce el valor a copiar: ");
	scanf("%s", src);
	printf("El valor copiado en dest es %s.\n", ft_strncpy(dest, src, n));
	printf("El número de caracteres que vamos a copiar es: %d.\n", n);
}
*/