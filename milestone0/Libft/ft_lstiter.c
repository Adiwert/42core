/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:33:43 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/14 17:33:43 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *current;

    current = lst;
    if (lst == NULL || f == NULL)
        return ;
    while (current != NULL)
    {
        f(current->content);
        current = current->next;
    }
}

/*
#include <stdio.h>

void uppercase(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

int main(void)
{
    // Create linked list
    t_list *head = ft_lstnew(strdup("hello"));
    head->next = ft_lstnew(strdup("world"));

    // Apply function to modify content
    ft_lstiter(head, uppercase);

    // Print modified list
    printf("Modified list: ");
    t_list *temp = head;
    while (temp)
    {
        printf("%s -> ", (char *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free memory
    ft_lstclear(&head, free);

    return (0);
}
*/