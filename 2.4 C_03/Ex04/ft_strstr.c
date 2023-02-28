/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:27:30 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 13:32:59 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
int	main(void)
{
	char			str[22];
	char			to_find[22] = "";

	printf("Introduce la cadena donde buscar:  \n");
	scanf("%s", str);
	printf("Introduce la cadena a encontrar:  \n");
	scanf("%s", to_find);
	if (ft_strstr(str, to_find) == NULL)
		printf("La cadena no fue encontrada.\n");
	else
		printf("Son iguales en:  %s.\n", ft_strstr(str, to_find));
	return (0);
}
*/
