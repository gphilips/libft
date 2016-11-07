/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:19:31 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/05 20:29:09 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_atoi(const char *nptr)
{
	const char *str;
	size_t	result;
	size_t	negative;
	size_t	i;

	str = nptr;
	result = 0;
	negative = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' 
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (negative == 1)
		result = -result;
	return (result);
}
