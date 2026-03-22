/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfleites <hfleites@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 06:33:55 by hfleites          #+#    #+#             */
/*   Updated: 2026/03/22 06:58:19 by hfleites         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	t_list	*dict;
	int	size;
	int	first;
	char		*file;
	char		*num;

	//hacer los chequeo de los argumentos de las otras funciones, miren check
	if (argc == 3)
	{
		file = argv[1];
		num = argv[2];
	}
	if (argc == 2)
	{
		file = "numbers.dict";
		num = argv[1];
	}
	if (!positivo) //hacer funcion que diga si hay un signo negativo
		{
			error; //llamar funcion error
			return(0);
		}
	dict = readdicc(file, &size);//mirar parsing
	if (!dict)
	{
		dic error ;
		return (0)	
	}
	ft_print(num, dict, size, &first);// esto es para imprimir el resueltado
	write(1 , "\n", 1);
	free_malloc(dict, size); //modificar la funcion del free que tengo
	return (0);
}
