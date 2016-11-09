/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:02:29 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/05 17:13:05 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = (void*)malloc(sizeof(void*) * n);
	if (!tmp)
		return (NULL);
	memcpy(tmp, src, n);
	memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
