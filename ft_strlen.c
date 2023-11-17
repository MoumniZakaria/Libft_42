/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:48:29 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 10:15:49 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// int main()
// {
//     int a = 1200;
//     printf("======> %zu\n",ft_strlen((char *)&a));
// 	   printf("-------|%s|\n",(char *)&a);
//     printf("%zu\n",strlen((char *)&a));
//     return 0;
// } 
