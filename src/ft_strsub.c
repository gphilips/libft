/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:42:45 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/08 17:47:56 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
		unsigned int	i;
		unsigned int	k;
		unsigned int	tmp;
		char			*sub;

		i = 0;
		if (s)
		{
			sub = ft_strnew(len);
			if (!sub)
				return (NULL);
			while (s[i])
			{
				if (i == start)
				{
					tmp = i;
					k = 0;
					while (i < (unsigned int)len)
					{
						sub[k] = s[i];
						i++;
						k++;
					}
					sub[k] = '\0';
					return (sub);
				}
				i++;
			}
		}
		return (NULL);
}
