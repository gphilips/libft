#include "../include/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(*list))))
		return (NULL);
	if (!(list->content = (void*)malloc(sizeof(*content))))
		return (NULL);
	if (content)
	{
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
		list->next = NULL;
	}
	else
	{
		list->content = NULL;
		list->content_size = 0;
	}
	return (list);
}
