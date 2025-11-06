/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:04:04 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/05 22:47:25 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}
// int main()
// {
// 	int i = 0;
// 	t_list *node = ft_lstnew("1");
// 	t_list *node1 = ft_lstnew("2");
// 	t_list *node2 = ft_lstnew("3");
// 	t_list *node3 = ft_lstnew("A");
// 	t_list *node4 = ft_lstnew("enndd");
	
	
// 	node -> next = node1;
// 	node1 -> next = node2;

	
// 	ft_lstadd_back(&node,node3);
// 	ft_lstadd_back(&node,node4);

// 	while (node)
// 	{
// 	printf("the content:%s\n",node->content);
// 	node = node->next;
// 	i++;
// 	}
// 	// printf("the content:%s\n",node->content);
// }