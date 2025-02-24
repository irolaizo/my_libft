/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:15:26 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 18:15:26 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int printable)
{
	if (printable >= 32 && printable <= 127)
		return (1);
	return (0);
}

/*int main (void)
{
	int printable;
	printable = ' ';

	printf("ft_isprint: %d\n", ft_isprint(printable));
	printf("isprint: %d\n", isprint(printable));
	return (0);
}*/
