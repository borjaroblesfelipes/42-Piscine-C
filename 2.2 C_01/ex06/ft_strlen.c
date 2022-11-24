/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:31:30 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/25 11:46:13 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	nc;

	nc = 0;
	while (str[nc] != '\0')
	{
		nc++;
	}
	return (nc);
}

/*
int	main(void)
{
	char	a[] = "Felipés";
	char	*str;

	str = &a[1];
	printf("El número de caracteres es %d.\n", ft_strlen(str));
}
*/
