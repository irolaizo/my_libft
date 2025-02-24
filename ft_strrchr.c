/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:13:05 by irolaizo          #+#    #+#             */
/*   Updated: 2024/12/09 12:13:05 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *string, int tofind)
{
	int i;

	i = 0;

	while (string[i]) // Avanzar hasta el final de la cadena
		i++;
	if (tofind == '\0') // Caso especial: si buscas '\0', devuelve un puntero al final
		return ((char *)&string[i]);
	while (i > 0) // Retroceder buscando `tofind`
	{
		if (string[i] == tofind)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL); // Si no se encuentra, devuelve NULL
}

/*int main (void)
{
	// Cadena de prueba
	char str[] = "Hola mundo";
	char *result;

	// Prueba con un carácter existente
	result = ft_strrchr(str, 'm');
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado\n");

	// Prueba con un carácter que no existe
	result = ft_strrchr(str, 'z');
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado\n");

	// Prueba con el terminador '\0'
	result = ft_strrchr(str, '\0');
	if (result)
		printf("Encontrado terminador nulo: %s\n", result);
	else
		printf("No encontrado\n");

	return 0;
}*/
