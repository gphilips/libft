/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:03:14 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/14 15:08:11 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_lstlen(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	size_t	len;

	len = ft_lstlen(lst);
	if (!(new = (t_list*)malloc(sizeof(t_list) * len)))
		return (NULL);
	while (lst && new && f)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		new = new->next;
		lst = lst->next;
	}
	return (new);
}
