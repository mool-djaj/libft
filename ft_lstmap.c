/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:24:41 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/23 21:19:26 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	void *node_cont;
	t_list *new_list;
	t_list *new_node;
	t_list *node;
	
	node = lst;
	new_list = NULL;


	

	if (!lst || !f)
	{
		return NULL;
	}
	
	while (node)
	{
		node_cont = f(node->content);
		new_node =ft_lstnew(node_cont);
		
		
		if (!new_node)
		{
			ft_lstclear(&new_list,del);
		}
		
		
		ft_lstadd_back(&new_list, new_node);
		node = node->next;
		
	}
	
	return (new_list);

}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "libft.h"

// void *to_upper(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = strdup(str); 
//     if (!new_str)
//         return NULL;
//     for (int i = 0; new_str[i]; i++)
//         if (new_str[i] >= 'a' && new_str[i] <= 'z')
//             new_str[i] -= 32; 
//     return new_str;
// }


// void del_content(void *content)
// {
//     free(content);
// }


// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
   
//     t_list *n1 = ft_lstnew(strdup("hello"));
//     t_list *n2 = ft_lstnew(strdup("world"));
//     n1->next = n2;

//     printf("Original list:\n");
//     print_list(n1);

//     t_list *new_list = ft_lstmap(n1, to_upper, del_content);

//     printf("\nNew list after ft_lstmap:\n");
//     print_list(new_list);

//     ft_lstclear(&n1, del_content);
//     ft_lstclear(&new_list, del_content);

//     return 0;
// }
