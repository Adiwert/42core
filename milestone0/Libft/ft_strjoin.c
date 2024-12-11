/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:41:48 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/11 21:14:04 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     len;
    char    *str;

    if (s1 == NULL || s2 == NULL)
        return (NULL); // Check if either string is NULL
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL); // Check if memory allocation failed
    i = 0;
    while (i < len && s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < len && s2[i] != '\0')
    {
        str[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    str[ft_strlen(s1) + i] = '\0';
    return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s1;
    char *s2;
    char *result;

    // Test Case 1: Normal strings
    s1 = "Hello, ";
    s2 = "World!";
    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Test 1: %s\n", result);
        free(result);
    }
    // Test Case 2: Empty second string
    s1 = "Hello, ";
    s2 = "";
    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Test 2: %s\n", result);
        free(result);
    }
    // Test Case 3: Both strings empty
    s1 = "";
    s2 = "";
    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Test 3: %s\n", result);
        free(result);
    }
    // Test Case 4: NULL string
    s1 = NULL;
    s2 = "World!";
    result = ft_strjoin(s1, s2);
    if (result == NULL)
    {
        printf("Test 4: Passed (NULL input handled correctly).\n");
    }
    return (0);
}
*/