/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:52:12 by tstewart          #+#    #+#             */
/*   Updated: 2024/11/14 22:05:17 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    // Test case 1: Alphanumeric characters (should return 1)
    printf("Test 1 (Uppercase 'A'): %d\n", ft_isalnum('A'));
    printf("Test 2 (Lowercase 'z'): %d\n", ft_isalnum('z'));
    printf("Test 3 (Digit '5'): %d\n", ft_isalnum('5')); 
    printf("Test 4 (Digit '0'): %d\n", ft_isalnum('0')); 

    // Test case 2: Non-alphanumeric characters (should return 0)
    printf("Test 5 (Special Char '!'): %d\n", ft_isalnum('!'));
    printf("Test 6 (Special Char '@'): %d\n", ft_isalnum('@'));
    printf("Test 7 (Space ' '): %d\n", ft_isalnum(' '));

    // Test case 3: Boundary cases (ASCII values outside the alphanumeric range)
    printf("Test 8 (ASCII 0): %d\n", ft_isalnum(0));
    printf("Test 9 (ASCII 127): %d\n", ft_isalnum(127)); 

    // Test case 4: Negative values (should return 0)
    printf("Test 10 (Negative -1): %d\n", ft_isalnum(-1));

    return (0);
}
*/