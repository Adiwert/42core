/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:35:05 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/13 19:35:05 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *current;
    current = lst;
    if (lst == NULL)
        return (NULL);
    while (current->next != NULL)
        current = current->next;
    return (current);
}

/*
#include <stdio.h>

int main(void)
{
    // Creating nodes
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");

    // Linking nodes
    node1->next = node2;
    node2->next = node3;

    // Finding the last node
    t_list *last = ft_lstlast(node1);

    // Printing the last node content
    if (last)
        printf("Last node content: %s\n", (char *)last->content);
    else
        printf("List is empty.\n");

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);

    return (0);
}
*/