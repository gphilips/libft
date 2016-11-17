/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:19:31 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/17 17:55:58 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int			ft_atoi(char const *s)
{
	int		negative;
	int		i;
	int		result;

	negative = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' '
			|| s[i] == '\f' || s[i] == '\r' || s[i] == '\v')
		i++;
	if (s[i] == '-')
		negative = 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	result = (negative == 1) ? -result : result;
	return (result);
}
