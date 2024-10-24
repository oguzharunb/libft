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
#include "libft.h"

__attribute__((nonnull(1)))
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	register size_t	i;
	char			*allocated;
	size_t			slen;

	slen = ft_strlen(s);
	allocated = malloc(sizeof(char) * (len + 1));
	if (!allocated)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] && i < slen)
	{
		allocated[i] = s[start + i];
		i++;
	}
	allocated[i] = '\0';
	return (allocated);
}
