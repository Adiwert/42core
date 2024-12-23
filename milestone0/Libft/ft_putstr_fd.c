/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:55:51 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 18:13:17 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if (s == NULL)
        return ;
    write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
    // Test 1: Print to standard output (fd = 1)
    ft_putstr_fd("Hello World!\n", 1);
    // Test 2: Handle NULL input
    ft_putstr_fd(NULL, 1);
    return(0);
}
*/