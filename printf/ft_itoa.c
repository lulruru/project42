/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:57:32 by russelenc         #+#    #+#             */
/*   Updated: 2022/11/27 18:56:57 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_lenitoa(long int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

static char *ft_itoa(long int n)
{
    char    *num;
    int     i;

    i = ft_lenitoa(n);
    num = malloc(sizeof(int) * (i+1));
    if (!num)
        return (0);
    num[i--] = '\0';
    if (n < 0)
    {
        num[0] = '-';
        n *= -1;
    }
    while (n != 0)
    {
        num[i] = n % 10 + 48;
        n /= 10;
        i--;
    }
    return (num);
}

int	ft_putnbrdec(int n)
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