/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:25:36 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 13:32:53 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ind1;
	unsigned int	ind2;

	ind1 = 0;
	ind2 = 0;
	while (dest[ind1] != '\0')
	{
		ind1++;
	}
	while ((src[ind2] != '\0') && (ind2 < nb))
	{
		dest[ind1 + ind2] = src[ind2];
		ind2++;
	}
	dest[ind1 + ind2] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char			dest[22];
	char			src[22];
	unsigned int	nb;

	nb = 6;
	printf("Introduce la cadena a concatenar: \n");
	scanf("%s", src);
	printf("Introduce la cadena a la que se unira: \n");
	scanf("%s", dest);
	printf("El número de caracteres que se uniran son %d.\n", nb);
	printf("La nueva cadena es:  %s.\n", ft_strncat(dest, src, nb));
}
*/