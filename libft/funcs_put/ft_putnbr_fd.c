/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:18:17 by gchanet           #+#    #+#             */
/*   Updated: 2021/11/08 13:13:33 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -9)
			ft_putnbr_fd(-(n / 10), fd);
		ft_putnbr_fd(-(n % 10), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
}
