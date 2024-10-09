/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:36 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 13:28:01 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		temp2[i] = temp1[i];
		if (temp1[i] == (unsigned char)c)
		{
			return (temp2 + i + 1);
		}
		i++;
	}
	return (NULL);
}
