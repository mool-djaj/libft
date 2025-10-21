/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:43:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:27 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count_words(const char *s, char c)
{
    size_t i = 0;
    size_t count = 0;

    while (s[i])
    {
        while (s[i] == c) 
            i++;
        if (!s[i])
            break;
        count++;       
        while (s[i] && s[i] != c)
            i++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    size_t start;
    size_t words;
    char **d;

    if (!s)
        return NULL;

    words = ft_count_words(s, c);
    d = malloc((words + 1) * sizeof(char *));
    if (!d)
        return NULL;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (!s[i])
            break;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        d[j++] = ft_substr(s, start, i - start); // allocate word
    }
    d[j] = NULL;

    return d;
}

// #include <stdio.h>
// int main()
// {
//     const char buffer[] = "mool djaj ostora";
//     char **d = ft_split(buffer, ' ');
//     int k = 0;

//     while (d[k])
//     {
//         printf("%s\n", d[k]);
//         k++;
//     }

//     return 0;
// }
