/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:26 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/22 09:55:15 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		m;
	long	rst;

	i = 0;
	m = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++; 
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = m * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rst = (rst * 10) + str[i] - 48 ;
		if (rst > 9223372036854775807 && m > 0)
			return (-1);
		else if (rst > 0 && rst - 1 > 9223372036854775807 && m < 0)
			return (0);
		i++;
	}
	return (rst * m);
}
