/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:53:09 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 14:46:26 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_cleanlist(char const **list, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(list[i]);
		i++;
	}
	free(list);
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**lst;
	size_t		word_len;
	int			word;

	lst = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	word = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[word] = ft_substr(s, 0, word_len);
			if (!lst[word])
			{
				ft_cleanlist(lst, word);
				return (NULL);
			}
			word++;
			s += word_len;
		}
	}
	lst[word] = NULL;
	return (lst);
}
