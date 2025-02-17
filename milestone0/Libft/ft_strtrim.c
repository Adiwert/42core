/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:15:14 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:34:10 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *str;

    i = 0;
    j = ft_strlen(s1);
    if (s1 == NULL || set == NULL)
        return (NULL);
    // Move i forward past the characters that are in 'set'
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    // Move j backward past the characters that are in 'set'
    while (j > i && ft_strchr(set, s1[j - 1]))
        j--;
    str = (char *)malloc((j - i + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    ft_strlcpy(str, &s1[i], j - i + 1);
    return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *result;
    // Test Case 1: Regular trim
    result = ft_strtrim("  \t\nHello World!  \t\n", " \t\n");
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    // Test Case 2: String where all characters are to be trimmed
    result = ft_strtrim("aaaaa", "a");
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    // Test Case 3: String with no characters to trim
    result = ft_strtrim("noTrim", "#");
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);  // Expected: "noTrim"
        free(result);
    }
    // Test Case 4: Empty string provided
    result = ft_strtrim("", " \t\n");
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);  // Expected: ""
        free(result);
    }
    return (0);
}
*/
