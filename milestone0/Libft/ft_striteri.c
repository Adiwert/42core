/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:49:54 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/18 23:29:49 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (s == NULL || f == NULL)
        return ;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

/*
#include <stdio.h>

static void to_upper(unsigned int index, char *c)
{
    (void)index; // Index is unused here
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
    char    s[] = "hello42";
    
    printf("Before: %s\n", s);
    ft_striteri(s, to_upper);
    printf("After: %s\n", s);
    return (0);
}
*/