/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:04:15 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/06 01:51:55 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		ft_lstdelone (node, del);
		node = next;
	}
	*lst = NULL;
}
// static void del(void *c)
// {
// 	free(c);
// }
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     t_list *node = ft_lstnew(strdup("1"));
//     t_list *node1 = ft_lstnew(strdup("2"));
//     t_list *node2 = ft_lstnew(strdup("3"));
//     t_list *node3 = ft_lstnew(strdup("0.5"));
//     t_list *node4 = ft_lstnew(strdup("0"));


//     node->next = node1;
//     node1->next = node2;
//     ft_lstadd_front(&node, node3);
//     ft_lstadd_front(&node, node4);
//     while (node)
//     {
//         printf("before clear: %s\n", (char *)node->content);
//         node = node->next;
//     }

//     ft_lstclear(&node, del);

//     if (!node)
//         printf("list cleared successfully\n");
// }
