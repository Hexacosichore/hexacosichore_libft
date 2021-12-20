/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:49:34 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/08 11:47:54 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putaddress_fd(void *ptr, int fd)
{	
	const char		*base = "0123456789abcdef";
	unsigned int	*i;
	int				j;
	int				b_length;
	char			buffer[16];

	j = 0;
	i = (unsigned int *) &ptr;
	b_length = 0;
	while (*i != 0)
	{
		buffer[b_length] = base[*i % 16];
		*i /= 16;
		b_length++;
	}
	while (j < 16 - b_length)
	{
		ft_putchar_fd('0', fd);
		j++;
	}
	while (j < 16)
	{
		ft_putchar_fd(buffer[15 - j], fd);
		j++;
	}
}
