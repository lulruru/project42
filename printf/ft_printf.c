/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:48:37 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/24 12:18:09 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ptr, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ptr, char *));
	/*else if (c == 'p')
		len += ft_putnbr_hex();*/
	else if ((c == 'd') || (c == 'i'))
		len += ft_putnbr_base(va_arg(ptr, int), "0123456789");
	else if (c == 'u')
		len += ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789");
	else if (c == 'x')
		len += ft_putnbr_base(va_arg(ptr, int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_putnbr_base(va_arg(ptr, int), "0123456789ABCDEF");
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	ptr;
	int		len;

	i = 0;
	len = 0;
	va_start (ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check(ptr, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return(len);
}

int main()
{
	int i;
	i = 123;
	char *str;
	str = "cbsiucs";
	ft_printf("%d", i);
}