/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:50 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/05 21:59:15 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i[2];
	char	*d;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i[0] = 0;
	i[1] = 0;
	d = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof (char));
	if (!d)
		return (NULL);
	while (i[0] < ft_strlen(s1))
	{
		d[i[0]] = s1[i[0]];
		i[0]++;
	}
	while (i[1] < ft_strlen(s2))
	{
		d[i[0] + i[1]] = s2[i[1]];
		i[1]++;
	}
	return (d);
}
