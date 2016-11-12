#include "../include/libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_count_word(char const *s, char c)
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

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	nb_word;
	size_t	wordlen;
	char	**tab;

	nb_word = ft_count_word(s, c);
	wordlen = ft_wordlen((char*)s, c);
	tab = (char**)malloc(sizeof(char*) * nb_word + 1);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && i < nb_word)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j] = ft_strsub(s, i, wordlen);
		if (!tab[j])
			return (NULL);
		s = s + wordlen;
		j++;
		i++;
	}
	return (tab);
}
