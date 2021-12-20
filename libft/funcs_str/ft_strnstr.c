/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:53:12 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/04 16:35:45 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*src;

	src = (char *)haystack;
	if (*needle == 0 || ft_strlen(needle) == 0)
		return (src);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}
