/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:59:53 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/14 15:59:53 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (del == NULL || lst == NULL)
        return;
    del(lst->content);
    free(lst);
}

/*
#include <stdio.h>

int main(void)
{
    t_list *node = ft_lstnew(ft_strdup("Hello World!"));
    if (node == NULL)
        return (1);
    printf("Before deletion: %s\n", (char *)node->content);
    ft_lstdelone(node, free);
    printf("After deletion: Node deleted.\n");
    return (0);
}
*/