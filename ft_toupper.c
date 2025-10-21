/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:42:09 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 10:42:10 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32 ;
		
	}
	
	return c;
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, toupper(c));

//     c = '9';
//     printf("\n%c -> %c", c, toupper(c));
//     return 0;
// }
