#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size < 1)
		return (NULL);
	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
