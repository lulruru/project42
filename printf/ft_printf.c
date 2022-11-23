/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:48:37 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/23 18:28:07 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(va_list ptr, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ptr, char));
	else if (c == 's')
		len += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
		len += ft_putnbr_hex();
	else if ((c == 'd') || (c == 'i'))
		len += ft_putnbr_base(va_arg(int, char *), "0123456789");
	else if (c == 'u')
		len += ft_putnbr();
	else if (c == 'x')
		len += ft_putnbr_hex();
	else if (c == 'X')
		len += ft_putnbr_hex();
	else if (c == '%')
		len += ft_putnbr_hex();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	ptr;

	i = 0;
	va_start (ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(ptr, str[i]);
		}
		else
			ft_putchar_fd(str[i]);
		i++;
	}
	va_end	ptr;
}
