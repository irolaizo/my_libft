/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:19:28 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 13:19:28 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks  for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) ||  islower(c)).
// In  some  locales, there may be additional characters for which isalpha() is true—letters which are neither
// uppercase nor lowercase.

#include "libft.h"

int ft_isalpha(int alphabetic)
{
	if ((alphabetic >= 'A' && alphabetic <= 'Z') || (alphabetic >= 'z' && alphabetic <= 'z'))
		return (1);
	return (0);
}
/*int main (void)
{
	int alphabetic;
	alphabetic = 'z';
	printf ("ft_isalpha: %d\n", ft_isalpha(alphabetic));
	printf ("isalpha: %d\n", isalpha(alphabetic));
	return (0);
}*/
