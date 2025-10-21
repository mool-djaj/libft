/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:46 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:40:47 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    char *ft_strdup(const char *s)
    {
        size_t i;
        unsigned int leng;
       char *d;

        leng = ft_strlen(s);
        i = 0;

        d = ft_calloc((leng + 1) ,sizeof(char));

        if (!d)
        {
            return (NULL);
        }
        
        while (i < leng)
        {
            d[i] = s[i];
            i++;
        }
        
        return (d);

    }
    // #include <stdio.h>

    // int main()
    // {
    //     unsigned char buffer[30]= "ayoub123456789";
    //     char *buffer1 = ft_strdup(buffer);

        

    //     printf("%s\n",buffer1);
    //     printf("%d",ft_strlen(buffer1));

    // }