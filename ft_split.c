/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:43:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/22 18:50:46 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:43:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/22 18:50:46 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*ft_free_all(char **tab, size_t j)
{
	while (j--)
		free(tab[j]);
	free(tab);
	return (NULL);
}

static int	ft_fill_tab(char **d, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	*substr;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			substr = ft_substr(s, start, i - start);
			if (!substr)
				return (ft_free_all(d, j), 0);
			d[j++] = substr;
		}
	}
	d[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**d;

	if (!s)
		return (NULL);
	d = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!d)
		return (NULL);
	if (!ft_fill_tab(d, s, c))
		return (NULL);
	return (d);
}
