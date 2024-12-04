/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:57:10 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/04 22:23:34 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  src_len;
    size_t  i;

    src_len = ft_strlen(src);
    i = 0;
    if (size == 0)
        return (src_len);
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (src_len);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: Copying to a buffer with enough space
    char src1[] = "Hello, World!";
    char dest1[20];
    size_t copied1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("Source: %s\n", src1);
    printf("Destination: %s\n", dest1);
    printf("Bytes required: %zu\n\n", copied1);

    // Example 2: Copying to a smaller buffer
    char src2[] = "Hello, World!";
    char dest2[6]; // Smaller buffer
    size_t copied2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("Source: %s\n", src2);
    printf("Destination: %s\n", dest2);
    printf("Bytes required: %zu\n\n", copied2);

    // Example 3: Passing size = 0
    char src3[] = "Hello, World!";
    char dest3[20];
    size_t copied3 = ft_strlcpy(dest3, src3, 0);
    printf("Source: %s\n", src3);
    printf("Destination (should remain empty): %s\n", dest3);
    printf("Bytes required (source length): %zu\n\n", copied3);

    // Example 4: Standard strlcpy for comparison
    char src4[] = "Compare this";
    char dest4[20];
    size_t copied4 = strlcpy(dest4, src4, sizeof(dest4));
    printf("Source: %s\n", src4);
    printf("Destination: %s\n", dest4);
    printf("Bytes required (source length): %zu\n", copied4);

    return (0);
}
*/