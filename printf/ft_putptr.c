/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:34:40 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/28 12:24:34 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_ptr(uintptr_t	num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

static void	putptr(uintptr_t	num)
{
	if (num >= 16)
	{
		putptr(num / 16);
		putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_putlen(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (ft_putstr("(nil)"));
	else
	{
		len += write(1, "0x", 2);
		putptr(num);
		len += len_ptr(num);
	}
	return (len);
}
