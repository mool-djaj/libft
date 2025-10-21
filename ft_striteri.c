/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:24:44 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 14:36:23 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t i;
	size_t len_s;

	i = 0;
	len_s = ft_strlen(s);

	if (!s || !f)
	{
		return;
	}
	
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}

}
// #include <stdio.h>
// #include "libft.h"

// // Function to uppercase letters
// void uppercase(unsigned int i, char *c)
// {
//     (void)i; // ignore index
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// int main()
// {
//     char str[] = "hello world!";
// 	printf("origenal string: %s\n", str); 

//     ft_striteri(str, uppercase);

//     printf("Modified string: %s\n", str); 
//     // Expected output: HELLO WORLD!

//     return 0;
// }
