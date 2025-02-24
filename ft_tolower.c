/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:29:34 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/21 13:29:34 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower (int lower)
{
	if (lower >= 'A' && lower <= 'Z')
		return (lower + 32);
	else
		return (lower);
}

/*int main (void)
{
	int lower;
	lower = 'A';
	char casteado = ft_tolower(lower);

	write (1, &casteado, 1);
	write (1, "\n", 1);
	printf("This is my ft_tolower: %d\n", ft_tolower(lower));
}*/
