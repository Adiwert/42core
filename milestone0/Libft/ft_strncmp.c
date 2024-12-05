/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:03:06 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 20:45:21 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] !='\0')
    {
        if (((unsigned char)s1[i] - (unsigned char)s2[i]) != 0)
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    if (i != n) // If the loop ends and one of the strings still has remaining characters
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    return (0); // Return 0 if all characters compared are equal
}

/*
#include <stdio.h>

int main(void)
{
    // Test Case 1: Identical strings
    printf("Test Case 1: ");
    printf("Result = %d\n", ft_strncmp("hello", "hello", 5));

    // Test Case 2: Strings differing in a character within 'n'
    printf("Test Case 2: ");
    printf("Result = %d\n", ft_strncmp("hello", "hellz", 5));

    // Test Case 3: Strings differing beyond 'n'
    printf("Test Case 3: ");
    printf("Result = %d\n", ft_strncmp("hello", "hellz", 4));

    // Test Case 4: First string is a prefix of the second
    printf("Test Case 4: ");
    printf("Result = %d\n", ft_strncmp("hello", "hello world", 5)); 

    // Test Case 5: Comparison with empty string
    printf("Test Case 5: ");
    printf("Result = %d\n", ft_strncmp("", "hello", 5));

    // Test Case 6: n = 0 (no comparison should be made)
    printf("Test Case 6: ");
    printf("Result = %d\n", ft_strncmp("hello", "world", 0));

    // Test Case 7: Larger 'n' than either string length
    printf("Test Case 7: ");
    printf("Result = %d\n", ft_strncmp("hello", "hello", 10));

    return (0);
}
*/