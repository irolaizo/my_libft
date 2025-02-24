/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:06:26 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/18 21:06:26 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper (int upper)
{
	if (upper >= 'a' && upper <= 'z')
		return (upper - 32);
	else
		return (upper);
}

/*int main (void)
{
	int upper;
	upper = '1';
	char casteado = ft_toupper(upper);

	write (1,&casteado, 1);
	write (1,"\n", 1);
	printf("This is my ft_toupper %d\n", ft_toupper(upper));
}*/
