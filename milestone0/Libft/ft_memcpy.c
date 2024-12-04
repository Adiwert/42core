/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:40:35 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/04 21:55:36 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    size_t          i;
    unsigned char   *dest_p;
    unsigned char   *src_p;

    i = 0;
    dest_p = (unsigned char *)dest;
    src_p = (unsigned char  *)src;
    while (i < num)
    {
        dest_p[i] = src_p[i];
        i++;
    }
    return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    char src1[] = "Hello, world!";
    char dest1[50];
    printf("Before memcpy(): %s\n", dest1);
    ft_memcpy(dest1, src1, 13);
    printf("After memcpy(): %s\n", dest1);

    char src2[] = "Goodbye, world!";
    char dest2[] = "GeeksForGeeks";
    printf("Before memcpy(): %s\n", dest2);
    ft_memcpy(dest2, src2, 7);
    printf("After memcpy(): %s\n", dest2);

    return (0);
}
*/