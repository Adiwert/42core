/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:44:39 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 23:03:15 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (i < len && haystack[i] != '\0')
    {
        while ((haystack[i + j] == needle[j]) && (i + j < len))
        {
            j++;
            if (needle[j] == '\0')
                return ((char *)(haystack + i));
        }
        j = 0;
        i++;
    }
    return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    const char *haystack = "Hello, world!";
    const char *needle1 = "world";
    const char *needle2 = "malaysia";
    const char *needle3 = "\0";
    
    // Test case 1: Matching substring
    char *result1 = ft_strnstr(haystack, needle1, 15);
    if (result1)
        printf("Found '%s' at position: %ld\n", needle1, result1 - haystack);
    else
        printf("'%s' not found\n", needle1);
    
    // Test case 2: Substring not found
    char *result2 = ft_strnstr(haystack, needle2, 15);
    if (result2)
        printf("Found '%s' at position: %ld\n", needle2, result2 - haystack);
    else
        printf("'%s' not found\n", needle2);
    
    // Test case 3: Search within a limited length (only first 5 characters)
    char *result3 = ft_strnstr(haystack, needle1, 5);
    if (result3)
        printf("Found '%s' at position: %ld\n", needle1, result3 - haystack);
    else
        printf("'%s' not found\n", needle1);

    // Test case 4: Empty needle
    char *result4 = ft_strnstr(haystack, needle3, 15);
    if (result4)
        printf("Found empty needle at position: %ld\n", result4 - haystack);
    else
        printf("Empty needle is not found\n");
    
    return (0);
}
*/