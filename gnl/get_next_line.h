/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:07:33 by ruru              #+#    #+#             */
/*   Updated: 2022/12/11 17:50:45 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
# define BUFFER_SIZE 5
#endif

#include <stddef.h>
#include <stdlib.h>	
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strjoin(char *dest, char *src);
int		checkreturn(char *str);
char	*get_next_line(int fd);
char *ft_readfd(int fd, char *buffle);
char *cpyline(char *line);
char	*savenext(char *buffle);
void	*ft_calloc(size_t nmemb, size_t size);

#endif