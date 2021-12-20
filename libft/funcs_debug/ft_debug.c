/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:02:28 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 18:02:53 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_debug(char *str)
{
	ft_putstr_fd("[💡] ", 2);
	ft_putstrstyle_fd(str, BOLD, YELLOW, 2);
	ft_putstr_fd("\n", 2);
}
