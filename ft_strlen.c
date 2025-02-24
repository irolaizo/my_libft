/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:27:58 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 18:27:58 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *howlong)
{
	size_t i;

	i = 0;
	while (howlong[i])
		i++;
	return (i);
}

/*int main (void)
{
	char *howlong;

	howlong = "Hola";
	printf("This is my ft_strlen: %ld\n", ft_strlen(howlong));
}*/
