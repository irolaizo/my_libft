/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:21:05 by irolaizo          #+#    #+#             */
/*   Updated: 2024/11/10 13:21:20 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdint.h>

/*FIRST PART*/
int ft_isalpha(int alphabetic);
int ft_isdigit(int number);
int ft_isalnum(int alphanum);
int ft_isascii(int ascii);
int ft_isprint(int printable);
size_t ft_strlen(const char *howlong);
int ft_toupper(int upper);
int ft_tolower(int lower);
char *ft_strchr(const char *string, int tofind);
char *ft_strrchr(const char *string, int tofind);
int ft_strncmp(const char *fst_str, const char *scnd_str, size_t n_bytes);

/*SCOND PART*/

/*BONUS PART*/

#endif