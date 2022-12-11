/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:46:02 by russelenc         #+#    #+#             */
/*   Updated: 2022/12/11 18:00:42 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_readfd(int fd, char *buffle)
{
	int		r;
	char	*save;
	
	save = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!save)
		return (0);
	r = 1;
	while (r > 0)
	{
		r = read(fd,save,BUFFER_SIZE);
		if (r < 0)
		{
			free(save);
			return (0);
		}
		save[r] = 0;
		buffle = ft_strjoin(buffle,save);
	}
	free(save);
	return (buffle);
}

char	*cpyline(char *line)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (line == NULL)
		return (0);
	if (line[0] == 0)
		return (NULL);
	while(line[len] != '\0' || line[len] != '\n')
		len++;
	if (line[len] == '\n')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while(i < len)
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
	
}
char	*savenext(char *buffle)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!buffle)
		return (NULL);
	while(buffle[i] != '\0' && buffle[i] != '\n')
		i++;
	if (buffle[i] == '\n')
		i++;
	new = malloc(sizeof(char) * (ft_strlen(buffle) - i + 1));
	if (!new)
		return (NULL);
	while (buffle[i])
	{
		new[j] = buffle[i];
		i++;
		j++;
	}
	new[j] = '\0';
	free(buffle);
	return (new);
}

char	*get_next_line(int fd)
{
    char		*line;
	static char	*buffle[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd,&line, 0))
		return (0);
	buffle[fd] = ft_readfd(fd, buffle[fd]);
	line = cpyline(buffle[fd]);
	buffle[fd] = savenext(buffle[fd]);
	return (line);
}
