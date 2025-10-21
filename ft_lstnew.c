/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:55:15 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 17:51:43 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	typedef struct s_list
	{
    	void            *content;
    	struct s_list   *next;
	}  t_list;

	t_list *node = malloc(sizeof(t_list));
	
	node->content=content;
	node->next=NULL;

	return (node);

}