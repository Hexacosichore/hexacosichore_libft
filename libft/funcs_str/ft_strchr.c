/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:46:41 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:35:02 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && ((unsigned char)*s != (unsigned char)c))
		s++;
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
