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

static int	ft_conv(char const *s, int i, int negative)
{
	int		result;
	
	result = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	result = (negative == 1) ? -result : result;
	return (result);
}

int			ft_atoi(char const *s)
{
	int		negative;
	int		i;
	int		conv;

	negative = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' '
			|| s[i] == '\f' || s[i] == '\r' || s[i] == '\v')
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			negative = 1;
		if ((s[i] == '+' && s[i + 1] == '-')
			|| (s[i + 1] == '-' && s[i + 1] == '+'))
			return (0);
		i++;
	}
	conv = ft_conv(s, i, negative);
	return (conv);
}
