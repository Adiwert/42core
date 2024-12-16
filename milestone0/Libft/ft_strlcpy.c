/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:57:10 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:34:04 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  src_len;
    size_t  i;

    src_len = ft_strlen(src);
    i = 0;
    if (size == 0)
        return (src_len);
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: Copying to a buffer with enough space
    char src1[] = "Hello, World!";
    char dst1[20];
    size_t copied1 = ft_strlcpy(dst1, src1, sizeof(dst1));
    printf("Source: %s\n", src1);
    printf("Destination: %s\n", dst1);
    printf("Bytes required: %zu\n\n", copied1);

    // Example 2: Copying to a smaller buffer
    char src2[] = "Hello, World!";
    char dst2[6]; // Smaller buffer
    size_t copied2 = ft_strlcpy(dst2, src2, sizeof(dst2));
    printf("Source: %s\n", src2);
    printf("Destination: %s\n", dst2);
    printf("Bytes required: %zu\n\n", copied2);

    // Example 3: Passing size = 0
    char src3[] = "Hello, World!";
    char dst3[20];
    size_t copied3 = ft_strlcpy(dst3, src3, 0);
    printf("Source: %s\n", src3);
    printf("Destination (should remain empty): %s\n", dst3);
    printf("Bytes required (source length): %zu\n\n", copied3);

    // Example 4: Standard strlcpy for comparison
    char src4[] = "Compare this";
    char dst4[20];
    size_t copied4 = strlcpy(dst4, src4, sizeof(dst4));
    printf("Source: %s\n", src4);
    printf("Destination: %s\n", dst4);
    printf("Bytes required (source length): %zu\n", copied4);

    return (0);
}
*/