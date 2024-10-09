/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:00:25 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 14:15:33 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strdup(const char *s)
{
	size_t	slen;
	size_t	i;
	char	*allocated;

	slen = ft_strlen(s);
	allocated = malloc(sizeof(char) * (slen + 1));
	if (allocated == NULL)
		return (NULL);
	i = -1;
	while (++i < slen)
		allocated[i] = s[i];
	allocated[i] = '\0';
	return (allocated);
}
