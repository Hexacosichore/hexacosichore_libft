/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:49:11 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:35:26 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_des;
	unsigned int	size_src;

	size_des = ft_strlen(dst);
	size_src = ft_strlen(src);
	i = size_des;
	j = 0;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	if (size > 0 && i > 0)
		dst[i] = '\0';
	if (size < size_des)
		return (size_src + size);
	return (size_des + size_src);
}
