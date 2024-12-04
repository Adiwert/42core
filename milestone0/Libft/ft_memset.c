/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:15:54 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/04 21:53:40 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t num)
{
    unsigned char   *str_p;
    size_t          i;

    str_p = (unsigned char *)str;
    i = 0;
    while (num > 0)
    {
        str_p[i] = (unsigned char)c;
        i++;
        num--;
    }
    return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello, world!";
    printf("Before memset(): %s\n", str1);
    ft_memset(str1, '*', 5);
    printf("After memset(): %s\n", str1);

    char str2[50] = "GeeksForGeeks is for programming geeks!";
    printf("Before memset(): %s\n", str2);
    ft_memset(str2 + 13, '.', 8 * sizeof(char));
    printf("After memset(): %s\n", str2);

    return (0);
}
*/