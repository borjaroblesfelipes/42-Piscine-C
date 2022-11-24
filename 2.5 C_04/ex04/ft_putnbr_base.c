/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:17:18 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/01 12:01:32 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned char	a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}

/*
int	main(void)
{
	char			base[] = "01";
	unsigned long	c;

	c = 010010100;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	c = 0011;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	printf("\n");
	ft_putnbr_base(-1, base);
	printf("\n");
}
*/