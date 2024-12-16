/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:37:14 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 23:25:59 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_len(int n)
{
    int len;
    
    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

static int  ft_abs(int n)
{
    if (n < 0)
        return (-n); // Make the number positive equivilent
    return (n);
}

char    *ft_itoa(int n)
{
    int     len;
    char    *str;

    len = ft_len(n);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL); // Return NULL if memory allocation failed
    if (n == 0) // Special case handling: 0
        str[0] = '0';
    if (n < 0) // If the number is negative
        str[0] = '-';
    str[len] = '\0';
    len--; // Move to the last valid index to write digits
    while (n != 0)
    {
        str[len] = ft_abs(n % 10) + '0'; // Convert to ASCII
        n /= 10;
        len--;
    }
    return (str);
}

/*
#include <stdio.h>

int main(void)
{
    int test_cases[] = {0, -42, 123, -2147483648, 2147483647};
    int i;
    char *result;

    i = 0;
    while (i < 5)
    {
        result = ft_itoa(test_cases[i]);
        if (result == NULL)
        {
            printf("Memory allocation failed for test case %d\n", test_cases[i]);
        }
        else
        {
            printf("ft_itoa(%d) = %s\n", test_cases[i], result);
            free(result); // Free the allocated memory
        }
        i++;
    }
    return (0);
}
*/