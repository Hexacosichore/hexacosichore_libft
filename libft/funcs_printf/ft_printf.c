/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:56:13 by kbarbry           #+#    #+#             */
/*   Updated: 2021/12/08 12:30:40 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printf_putchar(char c, int *n);
void	ft_printf_putstr(char *s, int *n);
void	ft_printf_putnbr_base(long long int nbr, int size, int mode, int *n);
void	ft_printf_putptr_base(unsigned long int nbr, int *n);
void	ft_printf_put_ptr(unsigned long int ptr, int *n);

static void	ft_printf_switch(char c, va_list va, int *n)
{
	if (c == 'd' || c == 'i')
		ft_printf_putnbr_base((long long int)va_arg(va, int), 10, 1, n);
	else if (c == 's')
		ft_printf_putstr((char *)va_arg(va, char *), n);
	else if (c == 'c')
		ft_printf_putchar((char)va_arg(va, int), n);
	else if (c == 'X')
		ft_printf_putnbr_base((unsigned int)va_arg(va, unsigned int), 16, 1, n);
	else if (c == 'x')
		ft_printf_putnbr_base((unsigned int)va_arg(va, unsigned int), 16, 2, n);
	else if (c == '%')
		ft_printf_putchar('%', n);
	else if (c == 'u')
		ft_printf_putnbr_base((unsigned long int)va_arg(va, unsigned int),
			10, 1, n);
	else if (c == 'p')
		ft_printf_put_ptr((unsigned long int)va_arg(va, unsigned long int), n);
	else
		ft_printf_putchar(c, n);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	va;
	int		n;

	n = 0;
	va_start(va, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ft_printf_switch(str[++i], va, &n);
		else
			ft_printf_putchar(str[i], &n);
		i++;
	}
	va_end(va);
	return (n);
}
