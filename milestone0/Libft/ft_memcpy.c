/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:40:35 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/02 22:40:37 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (NULL);
    while (i < num)
    {
        ((char *)dest)[i] = ((char *)src)[i];
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