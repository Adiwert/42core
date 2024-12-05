/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:46:11 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 21:43:57 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t num)
{
    size_t          i;
    unsigned char   *s1_p;
    unsigned char   *s2_p;

    i = 0;
    s1_p = (unsigned char *)s1;
    s2_p = (unsigned char *)s2;
    while (i < num)
    {
        if (s1_p[i] != s2_p[i])
            return (s1_p[i] - s2_p[i]);
        i++;
    }
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "abcdez";

    // Test Case 1: Identical strings
    printf("Test 1: %d\n", ft_memcmp(str1, str1, 6));

    // Test Case 2: First differing character
    printf("Test 2: %d\n", ft_memcmp(str1, str2, 6));

    // Test Case 3: Limited comparison length
    printf("Test 3: %d\n", ft_memcmp(str1, str2, 3));

    // Test Case 4: Empty strings
    printf("Test 4: %d\n", ft_memcmp("", "", 0));

    return 0;
}
*/