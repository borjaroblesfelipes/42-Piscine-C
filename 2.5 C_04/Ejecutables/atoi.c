/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:26:15 by brobles-          #+#    #+#             */
/*   Updated: 2022/10/31 11:45:12 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>


int	ft_atoi(char *str)
{
	int	res;
	int	sig;

	sig = 0;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 45)
		|| (str[ind] >= '0' && str[ind] <= '9'))
	{
		if ((str[ind] == 32 || str[ind] == 43 || str[ind] == 45) && val > '0' )
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
	ft_atoi("  ---+--+1234567ab");
	write(1, "\n", 1);
}
