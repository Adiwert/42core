/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:36:11 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:33:59 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

/*
#include <stdio.h>

int main(void)
{
    char s1[50] = "Hello, world!";
    printf("Before bzero(): %s\n", s1);
    ft_bzero(s1, 5);
    printf("After bzero(): %s\n", s1);

    char s2[50] = "GeeksForGeeks is for programming geeks!";
    printf("Before bzero(): %s\n", s2);
    ft_bzero(s2 + 13, 8 * sizeof(char));
    printf("After bzero(): %s\n", s2);

    return (0);
}
*/