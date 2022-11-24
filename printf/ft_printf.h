/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:42 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/24 10:38:53 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>


int		ft_printf(const char *str, ...);
int		ft_check(va_list ptr, char c);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr_base(int n, char *base);
size_t	ft_strlen(char *str);

#endif
