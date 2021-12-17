/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:23:41 by nfarfetc          #+#    #+#             */
/*   Updated: 2021/11/21 12:01:37 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr( char *str, int ch)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)ch)
		return ((char *)(str + i));
	return (NULL);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*checker(char *rem)
{
	if (!rem)
	{
		rem = malloc(sizeof(char));
		rem[0] = '\0';
	}
	return (rem);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	s1 = checker(s1);
	if (!(s1 && s2))
		return (NULL);
	new = malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	free(s1);
	return (new);
}
