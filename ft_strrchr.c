/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:11:02 by obastug           #+#    #+#             */
/*   Updated: 2024/10/24 15:40:34 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ret;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	ret = (void *)0;
	ptr = (char *)s;
	while (*ptr)
	{
		ptr = ft_memchr(ptr, c, ft_strlen(ptr) + 1);
		if (!ptr)
			return (ret);
		ret = ptr;
		ptr++;
	}
	if (ret)
		return (ret);
	return ((void *)0);
}
