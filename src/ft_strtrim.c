/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:00:21 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/14 19:12:40 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static unsigned int		ft_trim_start(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static unsigned int		ft_trim_end(char const *s)
{
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = len - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	char			*tmp;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	start = ft_trim_start(s);
	end = ft_trim_end(s);
	if (start == len || end == start)
		return (ft_strnew(1));
	else 
	{
		if (!(tmp = (char*)malloc(sizeof(char) * ((end - start + 1) + 1))))
			return (NULL);
		i = 0;
		while (start <= end)
		{
			tmp[i] = s[start];
			i++;
			start++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
