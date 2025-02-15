/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:56:19 by tstewart          #+#    #+#             */
/*   Updated: 2025/02/14 17:56:19 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *current; // Pointer to traverse the original list
    t_list *new;     // Pointer to the first node of the new list
    t_list *temp;    // Temporary node for each new allocation

    if (lst == NULL || f == NULL)
        return (NULL);
    current = lst; // Starts at the head of the original list
    new = NULL;    // Initialized to NULL (avoid early failures)
    while (current != NULL)
    {
        temp = ft_lstnew(f(current->content)); // Allocate memory for new node after applied f
        if (temp == NULL)
        {
            ft_lstclear(&new, del); // Clear the new list if new node allocation fails
            return (NULL);
        }
        ft_lstadd_back(&new, temp); // Add new node to the end of the new list
        current = current->next;    // Move to the next node in the original list
    }
    return (new);
}

/*
#include <stdio.h>

void *uppercase(void *content)
{
    static int counter = 0;

    counter++;
    if (counter == 2) // Assume failure at the second node
        return (NULL);
    char *str = strdup((char *)content);
    char *temp = str;
    if (!str)
        return (NULL);
    while (*temp)
    {
        *temp = ft_toupper(*temp);
        temp++;
    }
    return (str);
}

int main(void)
{
    // Create linked list with three nodes
    t_list *head = ft_lstnew(strdup("hello"));
    head->next = ft_lstnew(strdup("world"));

    // Apply ft_lstmap, expecting NULL due to simulated failure
    t_list *mapped_list = ft_lstmap(head, uppercase, free);

    // Print result
    if (!mapped_list)
        printf("Memory allocation failed, returned NULL as expected.\n");
    else
    {
        t_list *temp = mapped_list;
        printf("Modified list: ");
        while (temp)
        {
            printf("%s -> ", (char *)temp->content);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    ft_lstclear(&head, free);
    ft_lstclear(&mapped_list, free);
    return (0);
}
*/