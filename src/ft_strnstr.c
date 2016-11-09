#include "../include/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	tmp;

	i = 0;
	k = 0;
	if (s2[i] == '\0' || !s2)
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[k])
		{
			tmp = i;
			while (s2[k] && s1[i + k] == s2[k])
				k++;
			i = tmp;
		}
		if (s2[k] == '\0')
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
