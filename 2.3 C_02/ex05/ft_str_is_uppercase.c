/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:25:57 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 11:24:23 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if ((str[temp] >= 'A' && str[temp] <= 'Z'))
		{
			temp++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "AaA";

	printf("El valor a evaluar como alfabético en mayúscula es: %s.\n", str);
	printf("El resultado es: %d.\n", ft_str_is_uppercase(str));
}
*/
