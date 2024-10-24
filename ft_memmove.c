/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:30:19 by obastug           #+#    #+#             */
/*   Updated: 2024/10/24 14:35:26 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

__attribute__((nonnull(1)))
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	register size_t	i;
	char			*temp_dest;
	const char		*temp_src;

	temp_dest = (char *)dest;
	temp_src = (const char *)src;
	i = 0;
	if (temp_dest >= temp_src)
	{
		while (i < n)
		{
			temp_dest[n - i - 1] = temp_src[n - i - 1];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
