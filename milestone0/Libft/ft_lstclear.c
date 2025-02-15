/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:33:24 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/14 16:33:24 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!del || !lst || !*lst)
        return ;
    while (lst && *lst)
    {
        temp = (*lst)->next;  // Next node is stored
        del((*lst)->content); // Content is deleted
        free(*lst);           // Node is freed
        *lst = temp;          // Next node is moved to lst
    }
}

/*
#include <stdio.h>

int main(void)
{
    t_list *head;

    // Creating a linked list with three nodes
    head = ft_lstnew(strdup("Node 1"));
    head->next = ft_lstnew(strdup("Node 2"));
    head->next->next = ft_lstnew(strdup("Node 3"));

    // Print before clearing
    printf("Before clearing: ");
    t_list *temp = head;
    while (temp)
    {
        printf("%s -> ", (char *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    // Clear the entire list
    ft_lstclear(&head, free);

    // Print after clearing (should print "List cleared")
    printf("After clearing: List cleared");

    return (0);
}
*/