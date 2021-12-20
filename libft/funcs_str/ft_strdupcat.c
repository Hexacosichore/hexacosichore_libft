/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:39:47 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/09 11:32:53 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdupcat(char **dest, char *str)
{
	size_t	oldlen;

	oldlen = ft_strlen(*dest);
	*dest = ft_realloc(*dest, oldlen + ft_strlen(str) + 1);
	if (dest && str)
		ft_strcpy(&(*dest)[oldlen], str);
	return (*dest);
}
