/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:05:53 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 15:56:00 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if ((str[temp] >= 'A' && str[temp] <= 'Z')
			|| (str[temp] >= 'a' && str[temp] <= 'z'))
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
	char	str[20] = "abcd1";
	
	printf("El valor a evaluar como alfabético es: %s.\n", str);
	printf("El resultado es: %d.\n", ft_str_is_alpha(str));
}
*/
