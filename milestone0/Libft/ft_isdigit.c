/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:31:40 by tstewart          #+#    #+#             */
/*   Updated: 2024/11/13 16:56:52 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    // Test case 1: Digit characters
    printf("Test 1 (Digit '0'): %d\n", ft_isdigit('0'));
    printf("Test 2 (Digit '5'): %d\n", ft_isdigit('5'));
    printf("Test 3 (Digit '9'): %d\n", ft_isdigit('9'));

    // Test case 2: Non-digit characters
    printf("Test 4 (Letter 'A'): %d\n", ft_isdigit('A'));
    printf("Test 5 (Letter 'z'): %d\n", ft_isdigit('z'));
    printf("Test 6 (Special Char '!'): %d\n", ft_isdigit('!'));
    
    // Test case 3: Edge cases
    printf("Test 7 (ASCII -1): %d\n", ft_isdigit(-1));
    printf("Test 8 (ASCII 127): %d\n", ft_isdigit(127));

    return (0);
}
*/