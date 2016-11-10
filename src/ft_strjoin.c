#include "../include/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, (char*)s2);
	return (str);
}
