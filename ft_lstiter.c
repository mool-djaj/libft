/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:02:40 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/23 20:24:09 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *node;

	if (!lst)
	{
		return; 
	}
			while (lst)
		{
			f(lst->content);
			lst = lst->next;
			
		}
	
	
}
// #include <stdio.h>
// #include "libft.h"


// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void)
// {
    
//     t_list *n1 = ft_lstnew("Hello");
//     t_list *n2 = ft_lstnew("World!");
//     t_list *n3 = ft_lstnew("42");

   
//     n1->next = n2;
//     n2->next = n3;


//     ft_lstiter(n1, print_content);


//     return 0;
// }
