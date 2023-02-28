/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:12:15 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 15:50:49 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	temp;

	temp = 0;
	while ((src[temp] != '\0') && (temp != n))
	{
		dest[temp] = src[temp];
		temp++;
	}
	dest[temp] = '\0';
	return (dest);
}

/*
int	main(void)
{
	unsigned int	n;

	char			sr2[30];
	char			sr1[30];
 
	n = 12;
	printf("Introduce el valor a copiar: ");
	scanf("%s", sr1);
	printf("El número de caracteres que vamos a copiar es: %d.\n", n);
	printf("El valor copiado en dest es %s.\n", ft_strlcpy(sr2, sr1, n));
}
*/
