/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stristr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:55:14 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/11 23:50:45 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_stristr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (!needle)
		return (-1);
	if (!ft_strlen(needle))
		return (0);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}
