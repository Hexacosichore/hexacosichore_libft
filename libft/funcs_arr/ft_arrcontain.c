/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcontain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:02:28 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 22:08:29 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_arrcontain(char **arr, char *set)
{
	unsigned int	i;

	i = 0;
	while (arr && arr[i])
		if (!strcmp(arr[i++], set))
			return (1);
	return (0);
}
