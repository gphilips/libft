/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:51:22 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/18 18:55:42 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((int)size < 0)
		return (NULL);
	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}
