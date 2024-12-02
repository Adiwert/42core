/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:14:52 by tstewart          #+#    #+#             */
/*   Updated: 2024/11/13 16:55:57 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	// Test case 1: Alphabetic characters (should return 1)
    printf("Test 1 (Uppercase 'A'): %d\n", ft_isalpha('A'));
    printf("Test 2 (Uppercase 'Z'): %d\n", ft_isalpha('Z'));
    printf("Test 3 (Lowercase 'a'): %d\n", ft_isalpha('a'));
    printf("Test 4 (Lowercase 'z'): %d\n", ft_isalpha('z'));

    // Test case 2: Non-alphabetic characters (should return 0)
    printf("Test 5 (Digit '0'): %d\n", ft_isalpha('0'));
    printf("Test 6 (Digit '9'): %d\n", ft_isalpha('9')); 
    printf("Test 7 (Special Char '!'): %d\n", ft_isalpha('!')); 
    printf("Test 8 (Space ' '): %d\n", ft_isalpha(' ')); 

    // Test case 3: Boundary cases (ASCII values outside the alphabet range)
    printf("Test 9 (ASCII 0): %d\n", ft_isalpha(0));
    printf("Test 10 (ASCII 127): %d\n", ft_isalpha(127)); 

    // Test case 4: Negative values (should return 0)
    printf("Test 11 (Negative -1): %d\n", ft_isalpha(-1));

	return (0);
}
*/