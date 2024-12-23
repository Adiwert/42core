/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:25:33 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 18:41:49 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd(n % 10 + '0', fd);
}

/*
int main(void)
{
    // Test 1: Print to standard output
    ft_putnbr_fd(12345, 1);
    write(1, "\n", 1);

    // Test 2: Negative number
    ft_putnbr_fd(-678910, 1);
    write(1, "\n", 1);

    // Test 3: Special case INT_MIN
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);

    return (0);
}
*/