/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrstyle_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:49:34 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 14:39:46 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstrstyle_fd(char *str, t_ftstyle st, t_ftcolor co, int fd)
{
	ft_putstr_fd("\033[", fd);
	ft_putnbr_fd((int)st, fd);
	ft_putstr_fd(";", fd);
	ft_putnbr_fd((int)co, fd);
	ft_putstr_fd("m", fd);
	ft_putstr_fd(str, fd);
	ft_putstr_fd("\033[0m", fd);
}
