/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:06:00 by irolaizo          #+#    #+#             */
/*   Updated: 2024/12/11 14:06:00 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *fst_str, const char *second_str, size_t n_bytes)
{
	size_t i;

	i = 0;

	if (n_bytes == 0)
		return (0);
	//Compara los caracteres de ambas cadenas hasta que se alcance el límite n_bytes o hasta que encuentre una diferencia (es decir, cuando los caracteres no sean iguales).
	while (i < n_bytes && fst_str[i] == second_str[i])
		i++;
	return (fst_str[i] - second_str[i]);
}

/*int main (void)
{
	char *fst_char;
	char *second_char;
	size_t n_bytes;

	fst_char = "Hola";
	second_char = "Holi";
	n_bytes = 4;

	printf("Este es mi ft_strncomp: %d\n", ft_strncmp(fst_char, second_char, n_bytes));
	write (1, "\n", 1);
	return (0);
}*/