/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:26:02 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 23:36:56 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}

/*
#include <stdio.h>

int main(void)
{
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    int     size;

    node1 = ft_lstnew("First node");
    node2 = ft_lstnew("Second node");
    node3 = ft_lstnew("Third node");
    node1->next = node2;
    node2->next = node3;

    size = ft_lstsize(node1);
    printf("%d\n", size);

    free(node1);
    free(node2);
    free(node3);

    return (0);
}
*/