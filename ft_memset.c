/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:24:59 by irolaizo          #+#    #+#             */
/*   Updated: 2024/12/16 11:24:59 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ptr: Es un puntero al bloque de memoria donde quieres escribir el valor.
//value: Es el valor que quieres asignar a cada byte del bloque de memoria. Este valor se convierte a unsigned char.
//num: Es la cantidad de bytes que quieres modificar.
//memset establece num bytes de memoria apuntada por ptr al valor value.

void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i = 0;
    unsigned char *byte_ptr = (unsigned char *)ptr;

    // Recorre los `num` bytes y asigna el valor
    if (num == 0)
        return ptr;
    while (i < num)
    {
        byte_ptr[i] = (unsigned char)value;
        i++;
    }

    // Devuelve el puntero original
    return ptr;
}

int main(void)
{
    char str[10] = "123456789";
// Define un array de caracteres de tamaño 10 e inicializa los primeros 9 caracteres con "123456789" y el último con el terminador nulo '\0'.
// Usamos memset para poner 'x' en los primeros 5 caracteres
    memset(str, 'x', 5);
    
    // Imprimimos el resultado
    printf("%s\n", str);  // Debería imprimir: "xxxxx6789"
//%s le dice a printf que reciba un puntero a un array de caracteres (es decir, una cadena de texto) y lo imprima.

    return 0;
}
