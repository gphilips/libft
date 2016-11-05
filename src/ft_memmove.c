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
	unsigned char	*cpy;
	unsigned char	*source;
	unsigned char	*tmp;
	size_t			i;

	cpy = (unsigned char*) dest;
	source = (unsigned char*) src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = source[i];
		cpy[i] = tmp[i];
		i++;
	}
	cpy[i] = '\0';
	return (dest);
}
