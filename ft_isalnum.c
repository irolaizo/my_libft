/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:36:13 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 17:36:13 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int alphanum)
{
	if ((alphanum >= 'A' && alphanum <= 'Z') || (alphanum >= 'a' && alphanum <= 'z') ||
		(alphanum >= '0' && alphanum <= '9'))
		return (1);
	return (0);
}

/*int main (void)
{
	int alphanum;
	alphanum = '&';
	printf("ft_isalnum: %d\n", ft_isalnum(alphanum));
	printf("isalnum: %d\n", isalnum(alphanum));
	return (0);
}*/