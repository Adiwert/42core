/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:22:02 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:34:01 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *s_p;

    i = 0;
    s_p = (unsigned char *)s;
    while (i < n)
    {
        if (s_p[i] == (unsigned char)c)
            return ((void *)(s_p + i)); // Return the pointer of the found byte
        i++;
    }
    return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    char *s = "Hello, World!";
    
    // Test case 1: Character found
    char *result1 = ft_memchr(s, 'o', sizeof(s));
    if (result1)
        printf("Found 'o' at position: %ld\n", result1 - s);
    else
        printf("'o' not found\n");
    
    // Test case 2: Character not found
    char *result2 = ft_memchr(s, 'z', sizeof(s));
    if (result2)
        printf("Found 'z' at position: %ld\n", result2 - s);
    else
        printf("'z' not found\n");
    
    // Test case 3: Check for null character
    char *result3 = ft_memchr(s, '\0', sizeof(s));
    if (result3)
        printf("Found null character at position: %ld\n", result3 - s);
    else
        printf("Null character not found\n");
    
    return (0);
}
*/