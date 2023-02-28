/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:56:10 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 11:21:12 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if ((str[temp] >= 'a' && str[temp] <= 'z'))
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
	char str[] = "aaa";

	printf("El valor a evaluar como alfabético en minúscula es: %s.\n", str);
	printf("El resultado es: %d.\n", ft_str_is_lowercase(str));
}
*/
