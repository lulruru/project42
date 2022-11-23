/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:42 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/23 16:38:01 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stddef.h>


int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n, char *base);
size_t	ft_strlen(char *str);

#endif
