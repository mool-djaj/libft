/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:20 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/06 02:21:52 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if (!node)
		return (NULL);
	while (node->next != NULL)
		node = node->next;
	return (node);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	t_list *last;
// 	t_list *aa = ft_lstnew(strdup("zoooooot"));
    // t_list *node = ft_lstnew(strdup("1"));
//     t_list *node1 = ft_lstnew(strdup("2"));
//     t_list *node2 = ft_lstnew(strdup("3"));
//     t_list *node3 =ft_lstnew(strdup("4"));
//     t_list *node4 = ft_lstnew(strdup("END"));

	

//     node->next = node1;
//     node1->next = node2;
	
// 	node2->next = node3;
// 	node3->next = node4;
// 	last = ft_lstlast(node);
// 	last -> next = aa;
	
    // while (node)
    // {
    //     printf("n: %s\n", (char *)node->content);
    //     node = node->next;
    // }

// }