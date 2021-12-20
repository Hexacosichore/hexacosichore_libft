/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:57:57 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:58:01 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_realloc(void *ptr, size_t newsize)
{
	char	*res;
	size_t	oldsize;

	oldsize = ft_strlen(ptr);
	if (newsize <= oldsize)
		return (ptr);
	res = ft_memalloc(newsize);
	if (!res)
		return (0);
	if (oldsize > 0)
		ft_memcpy(res, ptr, oldsize);
	ft_memdel(&ptr);
	return (res);
}
