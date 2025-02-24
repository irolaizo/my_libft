/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:02:18 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 18:02:26 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
		return (1);
	return (0);
}

/*int main (void)
{
	int ascii;
	ascii = 0;

	printf("ft_isascii: %d\n", ft_isascii(ascii));
	printf("isascii: %d\n", isascii(ascii));
	return (0);
}*/
