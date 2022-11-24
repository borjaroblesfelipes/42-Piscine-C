/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:25:32 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 15:43:07 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	temp;

	temp = 0;
	while (src[temp] != '\0')
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
	char	sr2[10];
	char	sr1[10];

	printf("Introduce el valor a copiar: ");
	scanf("%s", sr1);
	printf("El valor copiado en dest es %s.\n", ft_strcpy(sr2, sr1));
}
*/
