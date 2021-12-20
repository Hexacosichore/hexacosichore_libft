/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:32:11 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:34:35 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	if (!src && !dest)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		src2 = (unsigned char *)src;
		dest2 = (unsigned char *)dest;
		while (n > 0)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
		}
	}
	return (dest);
}
