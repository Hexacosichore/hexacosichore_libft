/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:39:47 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/14 18:43:55 by gchanet          ###   ########lyon.fr   */
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
		if (!ft_isdigit(str[i++]))
			return (0);
	return (i > 0);
}
