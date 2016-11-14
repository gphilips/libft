/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:00:39 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/14 17:02:29 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t		ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] != c && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		else if (s[i] == c && is_word == 1)
			is_word = 0;
		i++;
	}
	return (count);
}

static unsigned int		ft_start_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (0);
}

static char				*ft_get_word(char const *s, char c)
{
	size_t			wordlen;
	unsigned int	start;
	char			*tab;

	wordlen = ft_wordlen(s, c);
	start = ft_start_word(s, c);
	tab = ft_strsub(s, start, wordlen);
	return (tab);
}

char					**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	nb_word;
	char	**tab;

	if (!s || !c)
		return (NULL);
	nb_word = ft_count_word(s, c);
	tab = (char**)malloc(sizeof(char*) * nb_word + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i <= nb_word)
	{
		tab[i] = ft_get_word(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}