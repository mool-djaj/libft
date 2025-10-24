/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:50 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:40:51 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *d;
    size_t len_s1;
    size_t len_s2;
    size_t tootal;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    tootal = len_s1 + len_s2 ;
    i = 0;
    j = 0;

    d = ft_calloc(tootal + 1,sizeof (char));

    if (!d)
    {
        return (NULL);
    }
    

    while (i < len_s1)
    {
        d[i] = s1[i];
        i++;
    }

    while (j < len_s2)
    {
        d[i + j] = s2[j];
        j++;
    }
    
    return (d);
    
}


// int main()
// {
//     char buffer1[] ="444" ;
//     char buffer2[] ="iii" ;
    

//     char *d = ft_strjoin(buffer1 , buffer2);
//     printf("%s\n" , d);
//     printf("%d" , ft_strlen(d));


    
// }