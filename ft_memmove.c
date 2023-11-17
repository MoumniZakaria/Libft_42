/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:03:51 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 11:49:44 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
