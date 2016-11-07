#include "../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int , char *))
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] && f)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
