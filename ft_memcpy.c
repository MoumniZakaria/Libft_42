/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:47:38 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 11:53:33 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*b;
	const char	*a;

	if (!dst && !src && n)
	{
		return (0);
	}
	a = src ;
	b = dst ;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
// int main ()
// {
//     char src[5] = "helo";
//     char *dst = "vv";
//     printf("%s\n",ft_memcpy(((void *)0), ((void *)0), 3));
//     printf("%s\n",memcpy(((void *)0), ((void *)0), 3));
//     return 0;

// }
