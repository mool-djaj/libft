/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:55:15 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 18:28:27 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{

	t_list *node;
	
	node = malloc(sizeof(t_list));
	
	if (!node)
	return (NULL);
	
	node->content=content;
	node->next=NULL;

	return (node);

}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     t_list *node;

//     // Create a new node with content "Hello"
//     node = ft_lstnew("Hello, Libft!");

//     // Print node info
//     if (node)
//     {
//         printf("Content: %s\n", (char *)node->content);  // prints "Hello, Libft!"
//         printf("Next pointer: %p\n", (void *)node->next); // prints NULL
//     }
//     else
//     {
//         printf("Node creation failed!\n");
//     }

//     // Free the node when done
//     free(node);

//     return 0;
// }
