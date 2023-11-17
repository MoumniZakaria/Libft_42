/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:26 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 14:58:58 by zmoumni          ###   ########.fr       */
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
		i++;
	}
	return (rst * m);
}
// int	main(void)
// {
// 	const	char *s = "-21474836468465161598149619964554656";
// 	const	char *s1 = "--12345";
//     printf("%d\n", ft_atoi(s));
//     // printf("%d\n", ft_atoi(s1));
// 	printf("--------");
//     printf("=====>%d\n", atoi( s));
//     // printf("=====>%d\n", atoi( s1));
// }