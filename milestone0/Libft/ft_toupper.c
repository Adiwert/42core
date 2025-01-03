/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:23:05 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 18:09:03 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

/*
#include <stdio.h>

int main(void)
{
    // Example 1: Lowercase letters
    printf("Test 1: 'a' -> '%c'\n", ft_toupper('a')); // Should print 'A'
    printf("Test 2: 'z' -> '%c'\n", ft_toupper('z')); // Should print 'Z'

    // Example 2: Uppercase letters
    printf("Test 3: 'A' -> '%c'\n", ft_toupper('A')); // Should print 'A'
    printf("Test 4: 'Z' -> '%c'\n", ft_toupper('Z')); // Should print 'Z'

    // Example 3: Non-alphabetic characters
    printf("Test 5: '1' -> '%c'\n", ft_toupper('1')); // Should print '1'
    printf("Test 6: '@' -> '%c'\n", ft_toupper('@')); // Should print '@'

    return (0);
}
*/