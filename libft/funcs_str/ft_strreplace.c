/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:21:52 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/12 10:52:17 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_strreplace(char **str, char *replace, char *with)
{
	int		index;
	char	*ret;

	if (!replace)
		return ;
	index = ft_stristr(*str, replace, ft_strlen(*str));
	if (index < 0)
		return ;
	ret = NULL;
	if (index != 0)
		ret = ft_strndup(*str, index);
	if (with != NULL)
		ft_strdupcat(&ret, with);
	ft_strdupcat(&ret, &(*str)[index + ft_strlen(replace)]);
	ft_strdel(str);
	*str = ret;
}
