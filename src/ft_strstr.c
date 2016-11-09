#include "../include/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (s2[i] == '\0' || !s2)
		return ((char*)s1);
	while (s1[i])
	{
		if (ft_memcmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return ((char*)(&s1[i]));
		i++;
	}
	return (NULL);
}
