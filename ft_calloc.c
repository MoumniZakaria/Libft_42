/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:47:30 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 14:54:49 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;

	if (count == 0 || size == 0)
	{
		tmp = malloc(count * size);
		return (tmp);
	}
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
// int main()
// {
//     size_t size = 0;
//     size_t count = 0;
//     // char *p = ft_calloc(1024*1024*1024,1024*1024*1024);
//     char *s = calloc(1,115292100406975);
//     // printf("|%s|\n",p);
//     printf("===|%s|\n",s);
// }