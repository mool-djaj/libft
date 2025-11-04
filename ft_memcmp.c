/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 17:37:17 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *) s1;
	ptr2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s1[] = "2";
//     char s2[] = "5";

//     printf("Test\n");
//     printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, sizeof()));
//     printf("memcmp:    %d\n", memcmp(s1, s2, 12));

//     return 0;
// }
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char a1[] = "abcdef";
//     char a2[] = "abcdef";
//     char b1[] = "abcdef";
//     char b2[] = "abcdeg";
//     char c1[] = {0, -1, 127};
//     char c2[] = {0, 1, 127};

//     // Test 1: equal strings
//     printf("Test 1: %d (expected 0)\n", ft_memcmp(a1, a2, 6));

//     // Test 2: different last byte
//     printf("Test 2: %d (expected <0)\n", ft_memcmp(b1, b2, 6));

//     // Test 3: different in middle
//     printf("Test 3: %d (expected <0)\n", ft_memcmp(b1, b2, 5)); // should be 0 because first 5 bytes equal

//     // Test 4: zero length
//     printf("Test 4: %d (expected 0)\n", ft_memcmp(a1, b2, 0));

//     // Test 5: signed char comparison
//     printf("Test 5: %d (expected <0)\n", ft_memcmp(c1, c2, 2));



// 	    printf("\nTest 1: %d (expected 0)\n", memcmp(a1, a2, 6));

//     // Test 2: different last byte
//     printf("Test 2: %d (expected <0)\n", memcmp(b1, b2, 6));

//     // Test 3: different in middle
//     printf("Test 3: %d (expected <0)\n", memcmp(b1, b2, 5)); // should be 0 because first 5 bytes equal

//     // Test 4: zero length
//     printf("Test 4: %d (expected 0)\n", memcmp(a1, b2, 0));

//     // Test 5: signed char comparison
//     printf("Test 5: %d (expected <0)\n", memcmp(c1, c2, 2));

//     return 0;
// }

