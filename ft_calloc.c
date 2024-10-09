/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:48:09 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 12:49:09 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	i;
	char	*allocated;
	size_t	total_bytes;

	i = 0;
	total_bytes = nelem * elsize;
	allocated = malloc(total_bytes);
	if (allocated == NULL)
		return (NULL);
	while (i < nelem * elsize)
	{
		allocated[i] = 0;
		i++;
	}
	return (allocated);
}
