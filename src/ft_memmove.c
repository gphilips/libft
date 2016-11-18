/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:02:29 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/17 17:46:34 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
	}
	return (dest);
}
