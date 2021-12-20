/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:25:21 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/13 01:19:02 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				len;
	unsigned int	nabs;

	len = ft_nbrlen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nabs = -n;
	}
	else
		nabs = n;
	while (1)
	{
		res[--len] = (nabs % 10) + '0';
		nabs /= 10;
		if (nabs == 0)
			return (res);
	}
}
