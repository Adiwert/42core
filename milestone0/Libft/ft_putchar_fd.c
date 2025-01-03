/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:28:46 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 17:55:21 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
int main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('z', 1);
    ft_putchar_fd('\n', 1);
    ft_putchar_fd('1', 1);
    ft_putchar_fd('c', -1);
}
*/