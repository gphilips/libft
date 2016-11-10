#include "../include/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst)
	{
		ft_memdel((void**)alst);	
		ft_lstdelone(alst, del);
	}
}
