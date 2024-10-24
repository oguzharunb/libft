/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:58:43 by obastug           #+#    #+#             */
/*   Updated: 2024/10/24 15:40:47 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

__attribute__((nonnull(1)))
char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
