#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	dest = ft_strnew(len);
	if (dest == NULL)
		return (NULL);
	while (f && s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
