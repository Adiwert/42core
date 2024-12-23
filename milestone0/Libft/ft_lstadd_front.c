/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:39:59 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 23:25:43 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst == NULL) // Check if the list is empty
        *lst = new; // Set the head node to 'new'
    else
    {
        new->next = *lst; // Set the pointer of 'new' to the current head node
        *lst = new; // Dereference the original pointer of head node to 'new' node
    }
}

/*
#include <stdio.h>

int main(void)
{
    t_list  *head;
    t_list  *node;

    node = ft_lstnew("Hello World!");
    head = NULL;
    ft_lstadd_front(&head, node);
    if (head == node)
        printf("%s\n", (char *)head->content);
    else
        printf("Failed to add node.\n");
    free(node);
    return (0);
}
*/