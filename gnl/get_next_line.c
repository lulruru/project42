/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:46:02 by russelenc         #+#    #+#             */
/*   Updated: 2022/12/04 16:50:16 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
    char			**line;
    static char		*stash;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd,&line, 0))
		return (NULL);
	
}

void readintostash(int fd, char **stash)
{
	char	*buf;
	int		i;

	i = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while(!checkreturn(stash) && i != 0)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	}

	
}