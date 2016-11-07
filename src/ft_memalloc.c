#include "../include/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	tmp = NULL;
	tmp = (void*)malloc(sizeof(*tmp) * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
