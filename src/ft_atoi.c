/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:19:31 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/14 14:59:41 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_atoi(const char *s)
{
	size_t		result;
	size_t		negative;
	size_t		i;

	result = 0;
	negative = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' '
			|| s[i] == '\f' || s[i] == '\r' || s[i] == '\v')
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		negative = (s[i] == '-') ? 1 : 0;
		if ((s[0] == '-' && s[1] == '+') || (s[0] == '+' && s[1] == '-'))
			return (0);
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	result = (negative == 1) ? -result : result;
	return (result);
}
