/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:57:27 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:33:44 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void  *src, size_t n)
{
    size_t          i;
    unsigned char   *dest_p;
    unsigned char   *src_p;

    i = 0;
    dest_p = (unsigned char *)dest;
    src_p = (unsigned char  *)src;
    if (dest_p > src_p) // Compares memory address and check whether overlap exists
    {
        while (n--) // When overlapping, copy starts from last byte
            dest_p[n] = src_p[n];
    }
    else
    {
        while (i < n) // When no risk of overlapping, copy starts from first byte
        {
            dest_p[i] = src_p[i];
            i++;
        }
    }
    return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: Non-overlapping regions
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Source: %s\n", src1);
    printf("Destination: %s\n\n", dest1);

    // Example 2: Overlapping regions (copying forwards)
    char buffer1[20] = "12345";
    ft_memmove(buffer1 + 2, buffer1, 3);
    printf("Buffer: %s\n\n", buffer1);

    // Example 3: Overlapping regions (copying backwards)
    char buffer2[20] = "ABCDE";
    ft_memmove(buffer2, buffer2 + 2, 3);
    printf("Buffer: %s\n\n", buffer2);

    // Example 4: Using standard library memmove for comparison
    char buffer3[20] = "Overlap test";
    memmove(buffer3 + 3, buffer3, 7);
    printf("Buffer: %s\n", buffer3);

    return (0);
}
*/