/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:48:37 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/27 19:09:38 by russelenc        ###   ########.fr       */
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
	else if (c == 'p')
		len += ft_putlen(va_arg(ptr, unsigned long long));
	else if (c == 'd' || c == 'i')
		len += ft_putnbrdec(va_arg(ptr, int));
	else if (c == 'u')
		len += ft_putunsigned(va_arg(ptr, long long));
	else if (c == 'x')
		len += ft_putnbr_hex(va_arg(ptr, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_putnbr_hex(va_arg(ptr, unsigned int), "0123456789ABCDEF");
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
	return (len);
}

/*int main()
{
	int i;
	i = 123;
	char *str;
	str = "je suis drole";
	ft_printf("%d ", 0);
	printf("%p", i);
}*/