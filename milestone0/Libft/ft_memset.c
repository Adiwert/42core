/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:15:54 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:33:40 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *s_p;
    size_t          i;

    s_p = (unsigned char *)s;
    i = 0;
    while (n > 0)
    {
        s_p[i] = (unsigned char)c;
        i++;
        n--;
    }
    return (s);
}

/*
#include <stdio.h>

int main(void)
{
    char s1[50] = "Hello, world!";
    printf("Before memset(): %s\n", s1);
    ft_memset(s1, '*', 5);
    printf("After memset(): %s\n", s1);

    char s2[50] = "GeeksForGeeks is for programming geeks!";
    printf("Before memset(): %s\n", s2);
    ft_memset(s2 + 13, '.', 8 * sizeof(char));
    printf("After memset(): %s\n", s2);

    return (0);
}
*/