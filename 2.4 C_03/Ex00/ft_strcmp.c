/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:06:19 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 13:32:33 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	ind;

	ind = 0;
	while ((s1[ind] == s2[ind]) && (s1[ind] != '\0' || s2[ind] != '\0'))
	{
		ind++;
	}
	return (s1[ind] - s2[ind]);
}

/*
int	main(void)
{
	char	s1[22];
	char	s2[22];

	printf("Introduce s1: \n");
	scanf("%s", s1);
	printf("Introduce s2: \n");
	scanf("%s", s2);
	printf("Si - s1>s2, si + s1<s2 y si 0 s1=s2:     %d.\n", ft_strcmp(s1, s2));
}
*/