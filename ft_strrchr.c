/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:41:25 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:41:26 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
        size_t i = 0;
        size_t last = 0 ;

    while (s[i])
    {
        if (s[i] == (char)c)
            last = (char *)(s + i);
        i++;
    }

    if (c == '\0')
        return (char *)(s+ i);

    return last;
}
// int main() {
//     char myStr[] = "Hello World";
//     char *myPtr = ft_strrchr(myStr, 'l');
//     if (myPtr != NULL) {
//         printf("%s\n", myPtr);
//     }
//     return 0;
// }