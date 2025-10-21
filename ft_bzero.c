/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:38:56 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:39:00 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *ptr, size_t n)
{
    size_t i = 0;
    unsigned char *p = (unsigned char *)ptr;

    while (i < n)
    {
        p[i] = '\0';
        i++;
    }
}