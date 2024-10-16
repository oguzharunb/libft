/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:12:58 by obastug           #+#    #+#             */
/*   Updated: 2024/10/10 20:09:28 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	register size_t	i;
	char			*allocated;

	allocated = malloc(sizeof(char) * (len + 1));
	if (!allocated)
		return (NULL);
	i = -1;
	while (++i < len)
		allocated[i] = s[start + i];
	allocated[i] = '\0';
	return (allocated);
}
