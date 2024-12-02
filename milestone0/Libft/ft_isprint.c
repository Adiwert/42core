/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:37:47 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/02 20:37:53 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    // Test case 1: Printable characters (should return 1)
    printf("Test 1 (Printable 'A'): %d\n", ft_isprint('A'));
    printf("Test 2 (Printable 'z'): %d\n", ft_isprint('z'));
    printf("Test 3 (Printable '0'): %d\n", ft_isprint('0'));
    printf("Test 4 (Printable '!'): %d\n", ft_isprint('!'));
    printf("Test 5 (Printable '~'): %d\n", ft_isprint('~'));

    // Test case 2: Non-printable characters (should return 0)
    printf("Test 6 (Non-printable ASCII 0): %d\n", ft_isprint(0));
    printf("Test 7 (Non-printable ASCII 9): %d\n", ft_isprint(9));
    printf("Test 8 (Non-printable ASCII 31): %d\n", ft_isprint(31));
    printf("Test 9 (Non-printable ASCII 127): %d\n", ft_isprint(127));

    // Test case 3: Boundary cases
    printf("Test 10 (ASCII 32 - Space): %d\n", ft_isprint(32));
    printf("Test 11 (ASCII 126 - '~'): %d\n", ft_isprint(126)); 

    // Test case 4: Negative values (should return 0)
    printf("Test 12 (Negative -1): %d\n", ft_isprint(-1));

    return (0);
}
*/