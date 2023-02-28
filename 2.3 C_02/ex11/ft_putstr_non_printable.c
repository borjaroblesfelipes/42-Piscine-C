/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 08:23:36 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/27 12:17:52 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	temp;

	temp = 0;
	if (str[temp] == '\0')
	{
		write (1, "La cadena esta vacia", 21);
	}
	else
	{
		while (str[temp] != '\0')
		{
			if ((str[temp] >= ' ') && (str[temp] <= '~'))
			{
				ft_putchar (str[temp]);
			}
			else
			{
				ft_putchar('\\');
				ft_putchar("0123456789abcdef"[str[temp] / 16]);
				ft_putchar("0123456789abcdef"[str[temp] % 16]);
			}
			temp++;
		}
	}
}

/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}
*/
