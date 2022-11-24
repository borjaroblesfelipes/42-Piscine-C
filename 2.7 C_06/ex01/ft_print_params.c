/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:31:30 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 18:01:49 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i1;
	int	i2;

	i1 = 1;
	while (i1 < argc)
	{
		i2 = 0;
		while (argv[i1][i2])
		{
			write(1, &argv[i1][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i1++;
	}
	return (0);
}

/*
ARGV y ARGC son argumentos de main.
argc Tipo INT contiene el número de parametros que se han dado,
incluido el nombre del programa (argc[1])
**argv Tipo CHAR es un array de punteros a caracteres
**environ Da acceso al contenido de la cadena del MAIN
*/
