/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 07:39:01 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/12 18:29:16 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strichr(set, s1[i]) != -1)
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strichr(set, s1[i]) != -1)
		i--;
	return (ft_substr(s1, start, i + 1 - start));
}
