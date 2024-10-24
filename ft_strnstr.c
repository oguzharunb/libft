/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:20:01 by obastug           #+#    #+#             */
/*   Updated: 2024/10/24 14:51:45 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

__attribute__((nonnull(1, 2)))
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	register size_t	i;
	register size_t	j;
	size_t			little_len;

	i = 0;
	little_len = ft_strlen(little);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
			j++;
		if (j == len || j == little_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
