/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:22:39 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 13:32:48 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	ind1;
	int	ind2;

	ind1 = 0;
	ind2 = 0;
	while (dest[ind1] != '\0')
	{
		ind1++;
	}
	while (src[ind2] != '\0')
	{
		dest[ind1] = src[ind2];
		ind1++;
		ind2++;
	}
	dest[ind1] = src[ind2];
	return (dest);
}

/*
int	main(void)
{
	char	dest[22];
	char	src[22];

	printf("Introduce la cadena a concatenar: \n");
	scanf("%s", src);
	printf("Introduce la cadena a la que se unira: \n");
	scanf("%s", dest);
	printf("La nueva cadena es:  %s.\n", ft_strcat(dest, src));
}
*/