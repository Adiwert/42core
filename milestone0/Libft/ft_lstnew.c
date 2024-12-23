/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:17:07 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/23 22:39:33 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *node; // Declare a pointer to a t_list structure

    node = (t_list *)malloc(sizeof(t_list)); // Allocate memory for the new node
    if (node == NULL) // Check if memory allocation is failed
        return (NULL);
    node->content = content; // Pointer of new node is set to the passed content
    node->next = NULL; // Indicate the last node of thelist
    return (node); // Returns the pointer to the new node
}

/*
#include <stdio.h>

int main(void)
{
    t_list  *node;
    char    *s = "Hello World!";

    node = ft_lstnew(s);
    // Check if node creation succeeded
    if (node == NULL)
    {
        printf("Node creation failed!\n");
        return (-1);
    }
    // Print the content of the node
    printf("%s\n", (char *)node->content);
    // Print the value of node->next (should be NULL)
    if (node->next == NULL)
        printf("NULL\n");
    // Free the allocated memory for the node
    free(node);
    return (0);
}
*/