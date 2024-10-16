/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:30:19 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 13:44:47 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	register size_t	i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (!dest || !src)
		return (NULL);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = -1;
	if (temp_dest >= temp_src)
	{
		while (++i < n)
			temp_dest[n - i - 1] = temp_src[n - i - 1];
	}
	else
	{
		while (++i < n)
			temp_dest[i] = temp_src[i];
	}
	return (dest);
}
