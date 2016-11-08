/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:50:25 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/08 19:16:06 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dst[i] && i < n)
		i++;
	end = i;
	while (src[i - end] && (i < n - 1))
	{
		dst[i] = src[i - end];
		i++;
	}
	if (end < n)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
