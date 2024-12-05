/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:43:47 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/05 20:02:29 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    if (str[i] == '\0' && c == '\0')
        return ((char *)str + i);
    while (i >= 0)
    {
        if ((unsigned char)str[i] == (unsigned char)c)
            return ((char *)str + i);
        i--;
    }
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    const char *text = "Hello, World!";

    // Test 1: Character is in the string
    char target1 = 'o';
    char *result1 = ft_strrchr(text, target1);
    if (result1)
        printf("Test 1: Character '%c' found at position: %ld\n", target1, result1 - text);
    else
        printf("Test 1: Character '%c' not found.\n", target1);

    // Test 2: Character not in the string
    char target2 = 'a';
    char *result2 = ft_strrchr(text, target2);
    if (result2)
        printf("Test 2: Character '%c' found at position: %ld\n", target2, result2 - text);
    else
        printf("Test 2: Character '%c' not found.\n", target2);

    // Test 3: Null terminator
    char target3 = '\0';
    char *result3 = ft_strrchr(text, target3);
    if (result3)
        printf("Test 3: Null terminator found at position: %ld\n", result3 - text);
    else
        printf("Test 3: Null terminator not found.\n");

    // Test 4: Repeated character
    char target4 = 'l';
    char *result4 = ft_strrchr(text, target4);
    if (result4)
        printf("Test 4: Last occurrence of '%c' found at position: %ld\n", target4, result4 - text);
    else
        printf("Test 4: Character '%c' not found.\n", target4);

    return (0);
}
*/