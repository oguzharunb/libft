/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:46:47 by obastug           #+#    #+#             */
/*   Updated: 2024/10/09 13:37:52 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	char	sign;
	int		ret;

	ret = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] == ' ' || nptr[i] == '\t') && nptr[i])
		i++;
	if (nptr[i] && (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0' || nptr[i] <= '9') && nptr[i])
	{
		ret *= 10;
		ret += nptr[i] - '0';
		i++;
	}
	return (ret * sign);
}
