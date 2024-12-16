/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:44:39 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:34:06 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (*little == '\0')
        return ((char *)big);
    while (i < len && big[i] != '\0')
    {
        while ((big[i + j] == little[j]) && (i + j < len))
        {
            j++;
            if (little[j] == '\0')
                return ((char *)(big + i));
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
    const char *big = "Hello, world!";
    const char *little1 = "world";
    const char *little2 = "malaysia";
    const char *little3 = "\0";
    
    // Test case 1: Matching substring
    char *result1 = ft_strnstr(big, little1, 15);
    if (result1)
        printf("Found '%s' at position: %ld\n", little1, result1 - big);
    else
        printf("'%s' not found\n", little1);
    
    // Test case 2: Substring not found
    char *result2 = ft_strnstr(big, little2, 15);
    if (result2)
        printf("Found '%s' at position: %ld\n", little2, result2 - big);
    else
        printf("'%s' not found\n", little2);
    
    // Test case 3: Search within a limited length (only first 5 characters)
    char *result3 = ft_strnstr(big, little1, 5);
    if (result3)
        printf("Found '%s' at position: %ld\n", little1, result3 - big);
    else
        printf("'%s' not found\n", little1);

    // Test case 4: Empty little
    char *result4 = ft_strnstr(big, little3, 15);
    if (result4)
        printf("Found empty little at position: %ld\n", result4 - big);
    else
        printf("Empty little is not found\n");
    
    return (0);
}
*/