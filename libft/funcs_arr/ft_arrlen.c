/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:02:28 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 11:15:19 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_arrlen(char **arr)
{
	size_t	len;

	if (!arr || !(*arr))
		return (0);
	len = 0;
	while (arr[len])
		len++;
	return (len);
}
