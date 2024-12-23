/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:14:03 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 18:25:02 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return ;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

/*
int main(void)
{
    // Test 1: Print to standard output (fd = 1)
    ft_putendl_fd("Hello", 1);
    ft_putendl_fd("World!", 1);
    // Test 2: Handle NULL input
    ft_putendl_fd(NULL, 1);
    return(0);
}
*/
