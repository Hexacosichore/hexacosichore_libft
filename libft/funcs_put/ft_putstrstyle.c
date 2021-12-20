/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrstyle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:49:34 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/11 22:24:43 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstrstyle(char *str, t_ftstyle st, t_ftcolor co)
{
	ft_putstrstyle_fd(str, st, co, 1);
}
