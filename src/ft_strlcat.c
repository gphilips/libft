#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	while (src[i] && ((len_d + i + 1) < size))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (len_d + len_s);
}
