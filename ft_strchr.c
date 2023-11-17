/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:47:44 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 10:48:22 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}
// int main()
// {
//     char *s ="teste";
//     printf("%s\n",ft_strchr(s, 1024));
//     printf("%s\n",strchr(s, 1024));
//     return 0;
// }
