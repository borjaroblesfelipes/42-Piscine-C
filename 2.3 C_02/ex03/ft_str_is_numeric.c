/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:33 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 11:07:55 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if ((str[temp] >= '0' && str[temp] <= '9'))
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
	char	str[] = "0123";

	printf("El valor a evaluar como numérico es: %s.\n", str);
	printf("El resultado es: %d.\n", ft_str_is_numeric(str));
}
*/
