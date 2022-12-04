/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:25 by russelenc         #+#    #+#             */
/*   Updated: 2022/12/04 16:49:19 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(char *dest, char *src)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(dest);
	new = malloc(sizeof(char) * (j + ft_strlen(src) + 1));
	if (!new)
		return (0);
	while (dest[i])
	{
		new[i] = dest[i];
		i++;
	}
	i = 0;
	while(src[i]);
	{
		new[j + i] = src[i];
		i++;
	}
	new[i + j] = '\0';
	return (new);
}

int checkreturn(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] == '\n')
			return (1);
	}
	return (0);
}
