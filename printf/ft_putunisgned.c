/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunisgned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:36:39 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/25 14:50:22 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	itoa_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

static char	*ft_itoa(unsigned int n)
{
	char	*num;
	int		i;

	num = 0;
	i = itoa_len(n);
	num = malloc(sizeof(int) * (i + 1));
	if (!num)
		return (0);
	num[i--] = '\0';
	while (n != 0)
	{
		num[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (num);
}

int	ft_putunsigned(unsigned int n)
{
	char	*nu;
	int		len;

	len = 0;
	if (n == 0)
		len += write(1, "(null)", 1);
	else
	{
		nu = ft_itoa(n);
		len += ft_putstr(nu);
		free(nu);
	}
	return (len);
}