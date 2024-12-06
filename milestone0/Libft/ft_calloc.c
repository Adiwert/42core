/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:03:19 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/06 17:50:47 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *ptr; // ptr holds the allocated memory

    if (nmemb == 0 || size == 0)
        return (NULL); // Return NULL or call malloc(0)
    if (size * nmemb > (size_t) - 1)
        return (NULL); // Safeguard from memory overflow
    ptr = malloc(nmemb * size); // Allocate bytes to ptr
    if (ptr == NULL)
        return (NULL); // Return NULL if malloc() failed
    ft_bzero(ptr, nmemb * size); // Ensure the allocated memory is zero-initialised
    return ((void *)ptr); // Return the allocated memory cast to a void *
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *test1;
    void *test2;
    void *test3;
    void *test4;

    // Test 1: Normal allocation
    test1 = ft_calloc(5, sizeof(char));
    if (test1)
        printf("Test 1 Passed: Memory allocated for 5 chars.\n");
    else
        printf("Test 1 Failed: Allocation error.\n");
    free(test1);

    // Test 2: nmemb = 0 (should return NULL or a valid malloc(0))
    test2 = ft_calloc(0, sizeof(char));
    if (test2 == NULL)
        printf("Test 2 Passed: Allocated NULL for zero elements.\n");
    else
        printf("Test 2 Failed: Non-NULL pointer for zero elements.\n");
    free(test2);

    // Test 3: size = 0 (should return NULL or a valid malloc(0))
    test3 = ft_calloc(5, 0);
    if (test3 == NULL)
        printf("Test 3 Passed: Allocated NULL for zero size.\n");
    else
        printf("Test 3 Failed: Non-NULL pointer for zero size.\n");
    free(test3);

    // Test 4: Large allocation (overflow test)
    test4 = ft_calloc((size_t)-1, 2); // This should fail
    if (test4 == NULL)
        printf("Test 4 Passed: Prevented overflow allocation.\n");
    else
        printf("Test 4 Failed: Overflow allocation succeeded (unexpected).\n");
    free(test4);

    return (0);
}
*/