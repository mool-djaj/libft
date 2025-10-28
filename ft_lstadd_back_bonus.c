/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:04:04 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/28 20:24:17 by akaarich         ###   ########.fr       */
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
// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
// 	t_list *a = ft_lstnew((NULL));
// 	t_list *b = ft_lstnew(NULL);
// 	t_list *c = ft_lstnew((void *)3);
// 	t_list *d = ft_lstnew((void *)4);

// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&a, c);
// 	ft_lstadd_back(&a, d);

// 	while (a)
// 	{
// 		printf("%p\n", a->content);
// 		a = a->next;
// 	}
// }
