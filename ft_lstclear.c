/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:27:19 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/23 18:14:51 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;
    t_list *next;

    if (!lst||!del)
    {
        return;
    }

    node = *lst;
    
    	while (node)
	{
        next = node->next;
		ft_lstdelone(node,del);
        node = next;
	}

    *lst = NULL;

}