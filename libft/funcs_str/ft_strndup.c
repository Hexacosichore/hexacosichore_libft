/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:01:07 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 15:23:31 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strndup(const char *s, size_t size)
{
	char	*res;

	if (size == 0)
		return (NULL);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	ft_memcpy(res, s, size);
	res[size] = 0;
	return (res);
}
