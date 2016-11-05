/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:01:03 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/05 16:07:14 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cpy;
	unsigned char	*source;
	size_t			i;

	cpy = (unsigned char*) dest;
	source = (unsigned char*) src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		if (cpy[i] == (unsigned char) c)
		{
			cpy[i] = source[i];
			return (&(cpy[i + 1]));
		}
		cpy[i] = source[i];
		i++;
	}
	return (NULL);
}
