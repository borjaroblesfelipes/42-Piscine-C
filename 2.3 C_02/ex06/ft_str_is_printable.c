/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:10:00 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 11:27:18 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if ((str[temp] >= ' ' && str[temp] <= '~'))
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
	char	str[] = "A&A";

	printf("El valor a evaluar como caracteres imprimibles es: %s.\n", str);
	printf("El resultado es: %d.\n", ft_str_is_printable(str));
}
*/
