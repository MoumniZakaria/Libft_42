/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:50:51 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:23:14 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len = 1;
		n = n * (-1);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*check_minint(void)
{
	char	*str;
	int		i;
	size_t	n;

	n = 2147483648;
	i = 11;
	str = (char *)malloc(12);
	if (!str)
		return (NULL);
	str[11] = '\0';
	i--;
	str[0] = '-';
	while (i > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	if (n == (-2147483648))
		return (str = check_minint());
	len = count_nbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		n *= (-1);
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[len] = (n % 10) + 48;
		n = n / 10 ;
		len--;
	}
	return (str);
}
