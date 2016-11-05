/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:25:17 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/05 17:48:05 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s);
	free(dest);
	return (dest);
}
