/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:44:51 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/01 12:10:02 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	ind;

	ind = 0;
	while (*str != '\0')
	{
		ind++;
		str++;
	}
	return (ind);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	x = ft_strlen(dest);
	y = 0;
	while (src[y] != '\0' && x + 1 < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[y]));
}

int	main(void)
{
	char			dest[22];
	char			src[22];
	unsigned int	nb;

	nb = 60;
	printf("Introduce la cadena a concatenar: \n");
	scanf("%s", src);
	printf("Introduce la cadena a la que se unira: \n");
	scanf("%s", dest);
	printf("El número de caracteres que se uniran son %d.\n", nb);
	printf("La nueva cadena tiene:  %u.\n", ft_strlcat(dest, src, nb));
}

