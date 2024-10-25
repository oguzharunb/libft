/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:11:02 by obastug           #+#    #+#             */
/*   Updated: 2024/10/25 14:09:16 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	if (*s == c)
		ret = (char *)s;
	while (*s++)
	{
		if (*s == c)
			ret = (char *)s;
	}
	return (ret);
}
