/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:41:04 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:41:05 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *r)
{
    if (*r == '\0')
    return 0;
 
    else
    return 1 + ft_strlen(r + 1);
    
}
// #include <stdio.h>
// int main()
// {
//     printf("%d",ft_strlen("12"));
// }