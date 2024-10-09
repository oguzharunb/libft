/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:11:02 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 14:12:35 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	slen;
	char	*temp_s;

	temp_s = (char *)s;
	slen = ft_strlen(temp_s);
	i = 0;
	while (i < slen + 1)
	{
		if (temp_s[slen - i] == c)
			return (temp_s + slen - i);
		i++;
	}
	return (NULL);
}
