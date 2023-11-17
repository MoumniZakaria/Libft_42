/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:47:25 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 15:11:50 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	return (s);
}
// int main()
// {
//     size_t len = 9;
//     char b[10];
//     char *p = (char *)ft_bzero(b,len);
//     char *p1 = (char *)bzero(b,len);
//     printf("%s\n",p);
//     printf("%s\n",p1);
// }