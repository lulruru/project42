/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:42 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/28 12:25:09 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_check(va_list ptr, char c);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr_hex(unsigned int n, char *base);
size_t	ft_strlen(char *str);
int		ft_putunsigned(unsigned int n);
int		ft_putlen(unsigned long long num);
int		ft_putnbrdec(int n);
#endif
