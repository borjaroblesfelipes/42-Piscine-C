/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:02:19 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 15:46:04 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	ft_fun_control(char *str, int i, int val)
{
	if ((str[i] >= '0') && (str[i] <= '9'))
	{
		val = 1;
	}
	else
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			val = 1;
		}			
		else
		{
			val = 0;
		}
	}
	return (val);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		val;
	char	tempval;

	i = 0;
	val = 0;
	while (str[i] != '\0')
	{
		if ((val == 0) && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			val = 1;
		}
		else
		{
			tempval = ft_fun_control(str, i, val);
			val = tempval;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots qu-deux; cinquante+et+un";

	printf("El valor a convertir es: %s.\n", str);
	printf("El resultado es: %s.\n", ft_strcapitalize(str));
}
*/
