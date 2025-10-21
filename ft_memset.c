/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:36 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:40:37 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int vale, size_t n)
{
    size_t i = 0;

    unsigned char *p = (unsigned char *)ptr;


    while (i < n)
    {
        p[i] = (unsigned char *)vale;
        i++; 
    }

    return (ptr);
    
}