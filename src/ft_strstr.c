#include "../include/libft.h"

char	*ft_strstr(const char *s1, const char *s2){
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			while ((s1[i + j] == s2[j]) && s2[j])
				j++;
			return ((char*)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
