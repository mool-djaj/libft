/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:53:01 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 14:23:29 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *d;
	size_t len_s;

	i = 0;
	len_s = ft_strlen(s);

	if (!s)
	{
		return (NULL);
	}
	

	d = malloc(len_s + 1);
	
	if (!d)
	{
		return NULL;
	}
	
	while (s[i])
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = '\0';
	
	return d;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// // Function that uppercases letters, ignores the index
// char uppercase(unsigned int i, char c)
// {
//     (void)i; // ignore index
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return c;
// }

// int main()
// {
//     char *s = "Hello World!";
//     char *result;

//     result = ft_strmapi(s, uppercase); // apply function

//     if (result)
//     {
//         printf("Original: %s\n", s);
//         printf("Modified: %s\n", result);
//         free(result); // free allocated memory
//     }

//     return 0;
// }
