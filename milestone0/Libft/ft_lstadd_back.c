/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:14:59 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/14 15:14:59 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;

    if (*lst == NULL)
        *lst = new;
    else
    {
        current = *lst;
        current = ft_lstlast(current);
        current->next = new;
    }
}

/*
#include <stdio.h>

int main(void)
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("First"));
    ft_lstadd_back(&head, ft_lstnew("Second"));
    ft_lstadd_back(&head, ft_lstnew("Third"));

    // Print final result
    t_list *temp = head;
    while (temp)
    {
        printf("%s -> ", (char *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free memory
    while (head)
    {
        t_list *next = head->next;
        free(head);
        head = next;
    }
    return (0);
}
*/