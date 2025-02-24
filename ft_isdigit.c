/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:30:01 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 17:30:01 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int number)
{
	if (number >= '0' && number <= '9')
		return (1);
	return (0);
}

/*int main (void)
{
	int number;
	number = '9';

	printf("ft_isdigit; %d\n", ft_isdigit(number));
	printf("isdigit: %d\n", isdigit(number));
	return (0);
}*/
