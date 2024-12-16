/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 22:24:14 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:34:03 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t  dst_len;
    size_t  i;

    dst_len = 0;
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (dst[dst_len] != '\0' && dst_len < size)
        dst_len++;
    if (dst_len != ft_strlen(dst)) // If the size is smaller than length of dst
        return (dst_len + ft_strlen(src)); // Return total length of concatenated string would have
    while (src[i] != '\0' && dst_len + i < size - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: Concatenating to a buffer with enough space
    char dst1[20] = "Hello, ";
    char src1[] = "World!";
    size_t size1 = sizeof(dst1);
    size_t result1 = strlcat(dst1, src1, size1);
    printf("Example 1 - Source: %s\n", src1);
    printf("Example 1 - Destination: %s\n", dst1);
    printf("Example 1 - Total Length: %zu\n\n", result1);

    // Example 2: Concatenating with a smaller buffer
    char dst2[10] = "Hello, ";
    char src2[] = "World!";
    size_t size2 = sizeof(dst2);
    size_t result2 = strlcat(dst2, src2, size2);
    printf("Example 2 - Source: %s\n", src2);
    printf("Example 2 - Destination: %s\n", dst2);
    printf("Example 2 - Total Length: %zu\n\n", result2);

    // Example 3: Using a buffer size that leaves no space for concatenation
    char dst3[2] = "Hi";
    char src3[] = " there!";
    size_t size3 = sizeof(dst3);
    size_t result3 = strlcat(dst3, src3, size3);
    printf("Example 3 - Source: %s\n", src3);
    printf("Example 3 - Destination: %s\n", dst3);
    printf("Example 3 - Total Length: %zu\n\n", result3);

    return (0);
}
*/