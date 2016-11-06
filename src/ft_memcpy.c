/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:59:53 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/05 18:14:18 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy;
	unsigned char	*source;
	size_t	i;

	cpy = (unsigned char*) dest;
	source = (unsigned char*) src;
	i = 0;
	while (i < n)
	{
		cpy[i] = source[i];
		i++;
	}
	return (dest);
}
