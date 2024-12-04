/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 22:24:14 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/04 23:22:27 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcat(char *dest, const char *src, size_t size)
{
    size_t  dest_len;
    size_t  i;

    dest_len = 0;
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;
    if (dest_len != ft_strlen(dest)) // If the size is smaller than length of dest
        return (dest_len + ft_strlen(src)); // Return total length of concatenated string would have
    while (src[i] != '\0' && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: Concatenating to a buffer with enough space
    char dest1[20] = "Hello, ";
    char src1[] = "World!";
    size_t size1 = sizeof(dest1);
    size_t result1 = strlcat(dest1, src1, size1);
    printf("Example 1 - Source: %s\n", src1);
    printf("Example 1 - Destination: %s\n", dest1);
    printf("Example 1 - Total Length: %zu\n\n", result1);

    // Example 2: Concatenating with a smaller buffer
    char dest2[10] = "Hello, ";
    char src2[] = "World!";
    size_t size2 = sizeof(dest2);
    size_t result2 = strlcat(dest2, src2, size2);
    printf("Example 2 - Source: %s\n", src2);
    printf("Example 2 - Destination: %s\n", dest2);
    printf("Example 2 - Total Length: %zu\n\n", result2);

    // Example 3: Using a buffer size that leaves no space for concatenation
    char dest3[2] = "Hi";
    char src3[] = " there!";
    size_t size3 = sizeof(dest3);
    size_t result3 = strlcat(dest3, src3, size3);
    printf("Example 3 - Source: %s\n", src3);
    printf("Example 3 - Destination: %s\n", dest3);
    printf("Example 3 - Total Length: %zu\n\n", result3);

    return (0);
}
*/