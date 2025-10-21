/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:03 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:40:04 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src ,size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    i = n;

    if (!dst || !src)
    {
        return NULL;
    }
    
    if (d > s)
    {
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
        
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        

        
    }
    
return (dst);

}
