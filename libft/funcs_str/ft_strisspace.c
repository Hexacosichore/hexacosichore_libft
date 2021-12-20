/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:51:55 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 17:44:03 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strisspace(char *str)
{
	unsigned int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
		if (!ft_isspace(str[i++]))
			return (0);
	return (i > 0);
}
