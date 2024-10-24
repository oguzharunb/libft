/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:58:43 by obastug           #+#    #+#             */
/*   Updated: 2024/10/24 14:42:06 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	register size_t	i;
	char			*temp_s;

	temp_s = (char *)s;
	i = 0;
	while (temp_s[i])
	{
		if (temp_s[i] == c)
			return (temp_s + i);
		i++;
	}
	if (temp_s[i] == c)
		return (temp_s + i);
	return (NULL);
}
