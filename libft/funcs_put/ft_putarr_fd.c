/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:49:34 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 13:19:22 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putarr_fd(char **arr, int fd)
{
	unsigned int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
		ft_putendl_fd(arr[i++], fd);
}
