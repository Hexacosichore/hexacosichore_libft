/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:02:28 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 10:53:16 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_arrtostr_cat(char **arr, char *str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
			str[k++] = arr[i][j++];
		i++;
	}
}

char	*ft_arrtostr(char *arr[])
{
	size_t			len;
	unsigned int	i;
	char			*res;

	if (!arr)
		return (NULL);
	len = 0;
	i = 0;
	while (arr[i])
		len += ft_strlen(arr[i++]);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_arrtostr_cat(arr, res);
	return (res);
}
