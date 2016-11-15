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

static int	ft_fullblank(char const *s)
{
	size_t	len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		len--;
	}
	if (len == 0)
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	char			*tab;
	size_t			wordlen;

	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	if (ft_fullblank(s) == 1)
		return (ft_strdup(""));
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		start++;
		i++;
	}
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		end++;
		i--;
	}
	wordlen = ft_strlen(s) - start - end;
	tab = ft_strsub(s, start, wordlen);
	return (tab);
}
