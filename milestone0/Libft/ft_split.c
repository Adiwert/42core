/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:23:09 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/16 22:33:51 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(char const *s, char c)
{
    int in_word;
    int count;

    in_word = 0;
    count = 0;
    if (*s == '\0')
        return (0);
    while (*s != '\0')
    {
        if(*s != c && in_word == 0) // Check if entering a word
        {
            in_word = 1;
            count++;
        }
        if(*s == c && in_word != 0) // Check if leaving a word
            in_word = 0;
        s++;
    }
    return (count);
}

static char *extract_words(char const *s, char c, int *i)
{
    int     len;
    char    *ptr;

    len = 0;
    while (s[*i + len] != c && s[*i + len] != '\0') // Calculate the length of the word
        len++;
    ptr = ft_substr(&(s[*i]), 0, len); // Extract substring using ft_substr
    (*i) += len; // Move index pointer to the end of the current word
    return (ptr);
}

void    free_mem(char **arr_ptr, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(arr_ptr[i]); // Free each allocated string in an array
        i++;
    }
    free(arr_ptr); // Free the array itself
}

static char **fill_arr(char const *s, char c, int count, char **res_arr)
{
    int word_i;
    int char_i;

    word_i = 0;
    char_i = 0;
    while (word_i < count)
    {
        while (s[char_i] == c) // Skip delimiters
            char_i++;
        res_arr[word_i] = extract_words(s, c, &char_i); // Extract words out to store in res_arr
        if (res_arr[word_i] == NULL) // Handle memory allocation failure
        {
            free_mem(res_arr, word_i);
            return (NULL);
        }
        word_i++;
    }
    res_arr[word_i] = NULL; // Null-terminate the array
    return (res_arr);
}

char    **ft_split(char const *s, char c)
{
    char    **res_arr;
    int     count;

    if (s == NULL) // Handle NULL input
        return (NULL);
    count = count_words(s, c); // Get the word count
    res_arr = (char **)malloc((count + 1) * sizeof(char *)); // Allocate the memory for res_arr
    if (res_arr == NULL) // Return NULL if memory allocation failure
        return (NULL);
    fill_arr(s, c, count, res_arr); // Fill in the array with words that extracted out
    return (res_arr);
}

/*
#include <stdio.h>
#include <stdlib.h>

void    print_split(char **result)
{
    int i;

    i = 0;
    if (result == NULL)
    {
        printf("NULL result.\n");
        return; // Early exit from the function
    }
    while (result[i] != NULL)
    {
        printf("Word[%d]: %s\n", i, result[i]);
        i++;
    }
}

int main(void)
{
    char *str1 = "Hello world! Welcome to ft_split."; // Normal string
    char *str2 = "abc  def  ghi"; // Consecutive delimiters
    char *str3 = "";             // Empty string
    char *str4 = "   ";          // Only delimiters
    char *str5 = NULL;           // NULL input
    char **result;

    printf("Test Case 1: \"%s\"\n", str1);
    result = ft_split(str1, ' ');
    print_split(result);
    free_mem(result, count_words(str1, ' '));

    printf("\nTest Case 2: \"%s\"\n", str2);
    result = ft_split(str2, ' ');
    print_split(result);
    free_mem(result, count_words(str2, ' '));

    printf("\nTest Case 3: \"%s\"\n", str3);
    result = ft_split(str3, ' ');
    print_split(result);
    free_mem(result, count_words(str3, ' '));

    printf("\nTest Case 4: \"%s\"\n", str4);
    result = ft_split(str4, ' ');
    print_split(result);
    free_mem(result, count_words(str4, ' '));

    printf("\nTest Case 5: NULL input\n");
    result = ft_split(str5, ' ');
    print_split(result);
    // No need to free memory for NULL result

    return (0);
}
*/