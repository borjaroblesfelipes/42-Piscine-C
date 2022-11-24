/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobles- <brobles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:31:30 by brobles-          #+#    #+#             */
/*   Updated: 2022/11/02 17:53:41 by brobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int		ind;

	ind = 0;
	if (argc >= 1)
	{
		while (argv[0][ind])
		{
			write(1, &argv[0][ind], 1);
			ind++;
		}
		write(1, "\n", 1);
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
