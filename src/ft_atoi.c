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

static int	ft_conv(char const *s, int i, int sign)
{
	int		result;
	
	result = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	result = (sign < 0) ? -result : result;
	return (result);
}

int			ft_atoi(char const *s)
{
	int		sign;
	int		i;
	int		conv;

	sign = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' '
			|| s[i] == '\f' || s[i] == '\r' || s[i] == '\v')
		i++;
	while(s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '+')
			sign++;
		else if (s[i] == '-')
			sign--;
		i++;
	}
	conv = ft_conv(s, i, sign);
	return (conv);
}
