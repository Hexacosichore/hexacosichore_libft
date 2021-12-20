/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:16:30 by kbarbry           #+#    #+#             */
/*   Updated: 2021/12/08 12:25:32 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printf_putchar(char c, int *n)
{
	write(1, &c, 1);
	(*n)++;
}

void	ft_printf_putstr(char *s, int *n)
{
	int	i;

	i = 0;
	if (!s)
		ft_printf_putstr("(null)", n);
	else
	{
		while (s[i])
		{
			ft_printf_putchar(s[i], n);
			i++;
		}
	}
}

void	ft_printf_putnbr_base(long long int nbr, int size, int mode, int *n)
{
	int		nbrf[50];
	char	*base;
	int		i;

	i = 0;
	if (mode == 1)
		base = "0123456789ABCDEF";
	if (mode == 2)
		base = "0123456789abcdef";
	if (nbr < 0 && size == 10)
	{
		ft_printf_putchar('-', n);
		nbr = -nbr;
	}
	if (!nbr)
		ft_printf_putchar('0', n);
	while (nbr)
	{
		nbrf[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (--i >= 0)
		ft_printf_putchar(base[nbrf[i]], n);
}

void	ft_printf_putptr_base(unsigned long int nbr, int *n)
{
	int		nbrf[50];
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nbr == 0)
		ft_printf_putchar('0', n);
	while (nbr)
	{
		nbrf[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		ft_printf_putchar(base[nbrf[i]], n);
}

void	ft_printf_put_ptr(unsigned long int ptr, int *n)
{
	ft_printf_putstr("0x", n);
	if (!ptr)
		ft_printf_putchar('0', n);
	else
		ft_printf_putptr_base((unsigned long int)ptr, n);
}
