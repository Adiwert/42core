/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:27:34 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/06 17:01:45 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_atoi(const char *nptr) // nptr = number pointer
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = (nptr[i] - '0') + (result * 10);
        i++;
    }
    return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
    printf("Input: \"42\" -> Output: %d\n", ft_atoi("42"));
    printf("Input: \"-42\" -> Output: %d\n", ft_atoi("-42"));
    printf("Input: \"   123\" -> Output: %d\n", ft_atoi("   123"));
    printf("Input: \"+789\" -> Output: %d\n", ft_atoi("+789"));
    printf("Input: \"0\" -> Output: %d\n", ft_atoi("0"));
    printf("Input: \"-0\" -> Output: %d\n", ft_atoi("-0"));
    printf("Input: \"2147483647\" -> Output: %d\n", ft_atoi("2147483647"));
    printf("Input: \"-2147483648\" -> Output: %d\n", ft_atoi("-2147483648"));
    printf("Input: \"abc123\" -> Output: %d\n", ft_atoi("abc"));
    printf("Input: \"\" -> Output: %d\n", ft_atoi(""));
    printf("Input: \"   \" -> Output: %d\n", ft_atoi("   "));
    printf("Input: \"-000123\" -> Output: %d\n", ft_atoi("-000123"));

    return (0);
}
*/