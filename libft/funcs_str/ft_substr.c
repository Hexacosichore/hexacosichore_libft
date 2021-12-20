/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 07:38:16 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/07 21:26:53 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) <= len)
		len = ft_strlen(&s[start]);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	ft_memcpy(res, &s[start], len);
	res[len] = 0;
	return (res);
}
