/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:04:13 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 18:09:02 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}

/*
#include <stdio.h>

int main(void)
{
    // Example 1: Lowercase letters
    printf("Test 1: 'a' -> '%c'\n", ft_tolower('a')); // Should print 'a'
    printf("Test 2: 'z' -> '%c'\n", ft_tolower('z')); // Should print 'z'

    // Example 2: Uppercase letters
    printf("Test 3: 'A' -> '%c'\n", ft_tolower('A')); // Should print 'a'
    printf("Test 4: 'Z' -> '%c'\n", ft_tolower('Z')); // Should print 'z'

    // Example 3: Non-alphabetic characters
    printf("Test 5: '1' -> '%c'\n", ft_tolower('1')); // Should print '1'
    printf("Test 6: '@' -> '%c'\n", ft_tolower('@')); // Should print '@'

    return (0);
}
*/