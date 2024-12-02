/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:58:22 by tstewart          #+#    #+#             */
/*   Updated: 2024/11/13 16:59:24 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	// Test case 1: ASCII characters (should return 1)
    printf("Test 1 (ASCII 'A'): %d\n", ft_isascii('A'));
    printf("Test 2 (ASCII 'z'): %d\n", ft_isascii('z')); 
    printf("Test 3 (ASCII '0'): %d\n", ft_isascii('0'));
    printf("Test 4 (ASCII '!'): %d\n", ft_isascii('!'));

    // Test case 2: Non-ASCII characters (should return 0)
    printf("Test 5 (Non-ASCII 128): %d\n", ft_isascii(128));

    // Test case 3: Boundary cases
    printf("Test 6 (ASCII 0): %d\n", ft_isascii(0));
    printf("Test 7 (ASCII 127): %d\n", ft_isascii(127));
    
    // Test case 4: Negative values (should return 0)
    printf("Test 8 (Negative -1): %d\n", ft_isascii(-1));

	return (0);
}
*/