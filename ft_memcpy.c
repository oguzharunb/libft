/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:29:53 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 13:44:20 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	register size_t	i;

	if (!dest || !src)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = -1;
	while (++i < n)
		ptr1[i] = ptr2[i];
	return (ptr1);
}
