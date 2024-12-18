/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:27:24 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/18 23:23:57 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *res;
    unsigned int    i;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    res = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        // Apply funtion 'f' to the current character
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

/*
#include <stdio.h>

static char to_upper(unsigned int index, char c)
{
    (void)index; // Index is unused here
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(void)
{
    char    *ori;
    char    *res;

    ori = "hello42";
    res = ft_strmapi(ori, to_upper);
    if (res == NULL)
        printf("Memory allocation failed.\n");
    printf("Original: %s\n", ori);
    printf("Result: %s\n", res);
    free(res);
    return (0);
}
*/