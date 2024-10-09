/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:11:54 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 14:12:30 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	i;
	size_t	final_size;
	char	*final_string;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < s1_len && ft_isin(s1[i], set))
	{
		i++;
	}
	s1_len--;
	while (i <= s1_len && ft_isin(s1[s1_len], set))
	{
		s1_len--;
	}
	final_size = (sizeof(char) * (s1_len - i + 2));
	final_string = malloc(final_size);
	if (!final_string)
		return (NULL);
	ft_strncpy(final_string, s1 + i, final_size - 1);
	return (final_string);
}
