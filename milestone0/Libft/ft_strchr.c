/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:11:00 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:33:56 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if (*s == '\0' && c == '\0')
        return ((char *)s);
    else
        return (0);
}

/*
#include <stdio.h>

int main(void)
{
    // Test Case 1: Character is present in the string
    const char *text1 = "Hello, World!";
    char target1 = 'W';
    char *result1 = ft_strchr(text1, target1);
    if (result1)
        printf("Test Case 1: Character '%c' found at position: %ld\n", target1, result1 - text1);
    else
        printf("Test Case 1: Character '%c' not found.\n", target1);

    // Test Case 2: Character is not present in the string
    const char *text2 = "Hello, World!";
    char target2 = 'a';
    char *result2 = ft_strchr(text2, target2);
    if (result2)
        printf("Test Case 2: Character '%c' found at position: %ld\n", target2, result2 - text2);
    else
        printf("Test Case 2: Character '%c' not found.\n", target2);

    // Test Case 3: Null terminator as target
    const char *text3 = "Hello, World!";
    char target3 = '\0';
    char *result3 = ft_strchr(text3, target3);
    if (result3)
        printf("Test Case 3: Null terminator found at position: %ld\n", result3 - text3);
    else
        printf("Test Case 3: Null terminator not found.\n");

    // Test Case 4: Empty string
    const char *text4 = "";
    char target4 = 'a';
    char *result4 = ft_strchr(text4, target4);
    if (result4)
        printf("Test Case 4: Character '%c' found at position: %ld\n", target4, result4 - text4);
    else
        printf("Test Case 4: Character '%c' not found.\n", target4);

    // Test Case 5: Multiple occurrences of the character
    const char *text5 = "banana";
    char target5 = 'a';
    char *result5 = ft_strchr(text5, target5);
    if (result5)
        printf("Test Case 5: First occurrence of '%c' found at position: %ld\n", target5, result5 - text5);
    else
        printf("Test Case 5: Character '%c' not found.\n", target5);

    return (0);
}
*/