/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:25 by russelenc         #+#    #+#             */
/*   Updated: 2022/12/09 15:41:53 by russelenc        ###   ########.fr       */
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
	j = 0;
	if (!dest)
		dest = ft_calloc(1,1);
	if (!dest || !src)
		return(free(dest),free(src), NULL);
	new = malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	if (!new)
		return (0);
	while (dest[i])
	{
		new[i] = dest[i];
		i++;
	}
	while(src[i]);
	{
		new[j + i] = src[j];
		j++;
	}
	new[i + j] = '\0';
	return (free(dest),new);
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = malloc(nmemb * size);
	if (!tab)
		return (0);
	while (i < nmemb * size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}