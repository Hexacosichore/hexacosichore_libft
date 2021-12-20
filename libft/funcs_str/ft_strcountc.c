/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:38:31 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 11:36:37 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strcountc(char *str, char c)
{
	unsigned int	i;
	size_t			size;

	if (!str)
		return (0);
	i = 0;
	size = 0;
	while (str[i])
		if (str[i++] == c)
			size++;
	return (size);
}
