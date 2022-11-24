/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:56:51 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/01 12:00:17 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	ind;

	ind = 0;
	while (*str)
	{
	ind++;
	str++;
	}	
	return (ind);
}

/*
int	main(void)
{
	char	str[30];

	printf("Introduce la cadena a contar: \n");
	scanf("%s", str);
	printf("La longitud de la cadena es:  %d.\n", ft_strlen(str));
	printf("La longitud de la cadena es:  %d.\n", ft_strlen(" amanda"));
}
*/