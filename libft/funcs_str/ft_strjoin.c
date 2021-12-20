/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:01:31 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:39:22 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const*s2)
{
	char	*res;
	int		len_s1;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * (len_s1 + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	ft_strcpy(res, s1);
	ft_strcpy(&res[len_s1], s2);
	return (res);
}
