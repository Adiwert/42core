/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:22:02 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 21:43:32 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t num)
{
    size_t          i;
    unsigned char   *s_p;

    i = 0;
    s_p = (unsigned char *)str;
    while (i < num)
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
    char *str = "Hello, World!";
    
    // Test case 1: Character found
    char *result1 = ft_memchr(str, 'o', sizeof(str));
    if (result1)
        printf("Found 'o' at position: %ld\n", result1 - str);
    else
        printf("'o' not found\n");
    
    // Test case 2: Character not found
    char *result2 = ft_memchr(str, 'z', sizeof(str));
    if (result2)
        printf("Found 'z' at position: %ld\n", result2 - str);
    else
        printf("'z' not found\n");
    
    // Test case 3: Check for null character
    char *result3 = ft_memchr(str, '\0', sizeof(str));
    if (result3)
        printf("Found null character at position: %ld\n", result3 - str);
    else
        printf("Null character not found\n");
    
    return (0);
}
*/