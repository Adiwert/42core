/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:36:11 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/02 22:36:15 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t num)
{
    ft_memset(str, 0, num);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello, world!";
    printf("Before bzero(): %s\n", str1);
    ft_bzero(str1, 5);
    printf("After bzero(): %s\n", str1);

    char str2[50] = "GeeksForGeeks is for programming geeks!";
    printf("Before bzero(): %s\n", str2);
    ft_bzero(str2 + 13, 8 * sizeof(char));
    printf("After bzero(): %s\n", str2);

    return (0);
}
*/