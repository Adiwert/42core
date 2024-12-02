/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:06:50 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/02 20:00:16 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return(len);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Test 1 (Empty String): %zu\n", ft_strlen(""));
    printf("Test 2 (Single Character): %zu\n", ft_strlen("A"));
    printf("Test 3 (Short String): %zu\n", ft_strlen("Hello"));
    printf("Test 4 (Long String): %zu\n", ft_strlen("This is a longer string for testing purposes."));
    printf("Test 5 (String with Spaces): %zu\n", ft_strlen("   Leading spaces"));
    printf("Test 6 (Special Characters): %zu\n", ft_strlen("!@#$%^&*()_+-="));
    printf("Test 7 (Numbers in String): %zu\n", ft_strlen("1234567890"));
    printf("Test 8 (String with Null Char): %zu\n", ft_strlen("abc\0def"));
    printf("Test 9 (Newline and Tabs): %zu\n", ft_strlen("Hello\nWorld\t!"));

	return (0);
}
*/