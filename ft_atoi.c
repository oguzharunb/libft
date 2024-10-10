/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obastug <obastug@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:46:47 by obastug           #+#    #+#             */
/*   Updated: 2024/10/10 20:14:03 by obastug          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	char	sign;
	size_t	ret;

	ret = 0;
	i = -1;
	sign = 1;
	while ((nptr[++i] == ' ' || nptr[i] == '\t') && nptr[i])
		;
	if (nptr[++i] && (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
	}
	while ((nptr[++i] >= '0' && nptr[i] <= '9') && nptr[i])
		ret = ret * 10 + nptr[i] - 48;
	if (ret > 2147483647 && sign == 1)
		return (-1);
	if (ret > 2147483648 && sign == -1)
		return (0);
	if (ret == 2147483648 && sign == 1)
		return (-2147483648);
	return ((int)ret * sign);
}
