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

static char		*ft_get_word(char const *s, char c)
{
	size_t	wordlen;
	size_t	i;
	char	*tab;

	wordlen = ft_wordlen((char*)s, c);
	tab = (char*)malloc(sizeof(char) * wordlen + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < wordlen)
	{
		tab[i] = s[i];
		i++;
	}
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	nb_word;
	char	**tab;

	if (!s || !c)
		return (NULL);
	nb_word = ft_count_word(s, c);
	tab = (char**)malloc(sizeof(char*) * nb_word);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nb_word)
	{
		tab[i] = ft_get_word(s, c);
		i++;
	}
	return (tab);
}
