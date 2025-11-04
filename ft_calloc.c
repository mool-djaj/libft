/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:06 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 20:46:42 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count,	size_t	size)
{
	size_t			total;
	unsigned char	*d;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	d = (unsigned char *)malloc(total);
	if (!d)
		return (NULL);
	ft_bzero(d, total);
	return (d);
}
// #include <stdlib.h>
// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     int n = -1;
//     // char *real = calloc(n, -1);
//     char *mine = calloc(n, -1);

//     for (int i = 0; i < n; i++)
//         printf(" mine[%d]=%d\n", i, mine[i]);

//     // free(real);
//     free(mine);
// }
