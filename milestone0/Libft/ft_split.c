/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:23:09 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/11 23:29:59 by tstewart         ###   ########.fr       */
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
        if(*s != c && in_word =='\0')
        {
            in_word = 1;
            count++;
        }
        if(*s == c && in_word != '\0')
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
    while (s[len + *i] != c && s[*i + len])
        len++;
    ptr = ft_substr(&(s[*i]), 0, len);
    (*i) += len;
    return (ptr);
}

void    free_mem(char **arr_ptr, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(arr_ptr[i]);
        i++;
    }
    free(arr_ptr);
}

static char **fill_arr(char const *s, char c, int count, char **res_arr)
{
    int word_i;
    int char_i;

    word_i = 0;
    char_i = 0;
    while (word_i < count)
    {
        while (s[char_i] == c)
            char_i++;
        res_arr[word_i] = extract_word(s, c, &char_i);
        if (res_arr[word_i] == NULL)
        {
            free_mem(res_arr, word_i);
            return (NULL);
        }
        word_i++;
    }
    res_arr[word_i] = NULL; // Add NULL terminator at the end of array
    return (res_arr);
}

char    **ft_split(char const *s, char c)
{
    char    **res_arr;
    int     count;

    if (s == NULL)
        return (NULL);
    count = count_words(s, c);
    res_arr = (char **)malloc((count + 1) * sizeof(char *));
    if (res_arr == NULL)
        return (NULL);
    fill_arr(s, c, count, res_arr);
    return (res_arr);
}