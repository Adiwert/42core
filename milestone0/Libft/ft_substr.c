/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:25:47 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/11 20:40:32 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i = 0;
    if (s == NULL)
        return (NULL); // Check if input string is NULL
    if (start >= ft_strlen(s))
        return (ft_strdup("")); // Check if start is out of bound
    else if ((start + len) >= ft_strlen(s))
        len = ft_strlen(s) - start; // Ensure no out-of-bounds access while copying char
    substr = (char *)malloc((len + 1) * sizeof(char)); // Allocate memory for substring
    if (substr == NULL)
        return (NULL); // Check if memory allocation failed
    while (s[start + i] != '\0' && i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "Hello, World!";
    char *result;

    // Test 1: Extract "World"
    result = ft_substr(s, 7, 5);
    if (result)
    {
        printf("Test 1: '%s'\n", result);
        free(result);
    }
    // Test 2: Extract beyond string length
    result = ft_substr(s, 13, 5);
    if (result)
    {
        printf("Test 2: '%s'\n", result);
        free(result);
    }
    // Test 3: Empty string
    result = ft_substr(s, 0, 0);
    if (result)
    {
        printf("Test 3: '%s'\n", result);
        free(result);
    }
    // Test 4: Start at 0, len > string length
    result = ft_substr(s, 0, 50);
    if (result)
    {
        printf("Test 4: '%s'\n", result);
        free(result);
    }
    // Test 5: NULL input
    result = ft_substr(NULL, 5, 5);
    if (result == NULL)
        printf("Test 5: Passed (NULL input handled correctly).\n");
    return (0);
}
*/