/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:54:42 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/06 18:10:45 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *ptr;
    size_t  len;

    len = ft_strlen(str);
    ptr = (char *)malloc((len + 1) * sizeof(char)); // +1 for null terminator
    if (ptr == NULL)
        return (NULL); // If malloc failed, return NULL
    ft_strlcpy(ptr, str, len + 1); // Copy input string into newly allocated memory, +1 for null terminator
    return (ptr); // Return the pointer to the duplicated string
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *original = "Hello, world!";
    char *duplicate;

    duplicate = ft_strdup(original);
    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
    }
    else
        printf("Memory allocation failed!\n");
    return (0);
}
*/