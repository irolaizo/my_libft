/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:50:06 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/21 13:50:06 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *string, int tofind)
{
	int i;
	i = 0;

	while (string[i] != tofind && string[i] != '\0') // Recorre la cadena buscando el carácter
		i++;
	if (string[i] == '\0' && tofind != '\0') // Si no se encontró el carácter (y no es '\0'), retorna NULL
		return (NULL);
	return ((char *)&string[i]); // Retorna un puntero al carácter encontrado (o al terminador '\0')
}

/*int main (void)
{
	char str[] = "Hola mundo"; // Cadena de prueba
	char *result;

	result = ft_strchr(str, 'm'); // Prueba con un carácter existente
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado\n");

	result = ft_strchr(str, 'z'); // Prueba con un carácter que no existe
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado\n");

	result = ft_strchr(str, '\0'); // Prueba con el terminador '\0'
	if (result)
		printf("Encontrado terminador nulo: %s\n", result);
	else
		printf("No encontrado\n");

	return 0;
}*/
