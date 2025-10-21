/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:41:29 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:41:30 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t k;
    char *d;
    size_t len;
    size_t len1;

    i = 0;
    j = 0;
    k = 0;
    len = ft_strlen(s1);

    if (!s1 || !set)
    {
        return (NULL);
    }

    while (s1[j] && ft_strchr(set, s1[j]))
    {
        j++;
    }

    if (j == len)
    {
        return (ft_strdup(""));
    }    

    while (len > j && ft_strchr(set, s1[len - 1 - i]))
    {
        i++;
    }

    len1 = len - i - j;

    d = ft_calloc( len1 + 1, sizeof(char));

    if (!d)
    {
        return (NULL);
    }
    
    while (k < len1)
    {
        d[k] = s1[k +j];
        k++;
    }

    return d; 

}
// #include <stdio.h>
// int main()
// {
//     char buffer[] ="aaa" ;
//     char buffer1[] ="a" ;
//     char *d = ft_strtrim(buffer , buffer1);
//     printf("%s\n" , d);
//     printf("%d" , ft_strlen(d));


    
// }
