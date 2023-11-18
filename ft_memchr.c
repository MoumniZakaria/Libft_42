/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:08 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/18 09:59:21 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str ;

	i = 0;
	str = (unsigned char *)s; 
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     int  *a =  {1,2,3,4};
//     printf("%p\n",ft_memchr(a ,1 ,4));
//     printf("%p\n",memchr(a ,1 ,4));
// }
