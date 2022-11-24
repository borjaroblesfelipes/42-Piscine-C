/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:26:15 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/03 12:45:18 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

void	ft_putchar_sig(char c, int sig, int val)
{
	if (val == 0)
	{
		if ((sig % 2) != 0)
			write(1, "-", 1);
	}
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	ind;
	int	sig;
	int	val;

	ind = 0;
	sig = 0;
	val = 0;
	while (str[ind] == 32)
		ind++;
	while (str[ind] == 43 || str[ind] == 45
		|| (str[ind] >= '0' && str[ind] <= '9'))
	{
		if ((str[ind] == 43 || str[ind] == 45) && val > 0 )
			return (sig);
		if (str[ind] == 45)
			sig++;
		if (str[ind] >= '0' && str[ind] <= '9')
		{
			ft_putchar_sig(str[ind], sig, val);
			val++;
		}
		ind++;
	}
	return (sig);
}

int	main(void)
{
	ft_atoi(" ---+--+1234ab567");
	write(1, "\n", 1);
	ft_atoi("  ---+---+1234ab567");
	write(1, "\n", 1);
	ft_atoi("a  ---+--+1234ab567");
	write(1, "\n", 1);
	ft_atoi("  ---+--+ 1234567ab");
	write(1, "\n", 1);
}
