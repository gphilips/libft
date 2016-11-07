#include "../include/libft.h"

void	ft_putendl(const char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
