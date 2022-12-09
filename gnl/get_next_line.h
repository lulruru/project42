/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:07:33 by ruru              #+#    #+#             */
/*   Updated: 2022/12/09 15:42:11 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
# define BUFFER_SIZE 5
#endif

#include <stddef.h>

int		ft_strlen(char *str);
char	*ft_strjoin(char *dest, char *src);
int		checkreturn(char *str);
char	*get_next_line(int fd);



#endif