/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:05:52 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/24 12:17:06 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(int n, char *base)
{
	long int	modulo;
	long int	division;
	long int	longnb;
	int			lenbase;
	static int	i;

	longnb = n;
	lenbase = ft_strlen(base);
	if (longnb < 0)
	{
		longnb *= (-1);
		ft_putchar('-');
	}
	division = longnb / lenbase;
	modulo = longnb % lenbase;
	if (division != 0)
	{
		ft_putnbr_base(division, base);
		i++;
	}
	write(1, &base[modulo], 1);
	return (i);
}

