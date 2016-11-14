/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:00:32 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/08 15:54:45 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		cmp;

	cmp = ft_strncmp(s1, s2, ft_strlen(s1));
	return (cmp);
}
