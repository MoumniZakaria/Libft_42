/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:47:41 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 11:27:33 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// int main ()
// {
//     int i = 0;
//     ft_memset(&i, 7, 2);
//     ft_memset(&i, 210, 1);
//     printf("%d", i);
//     //0000 0111 1101 0010
// }
// int main()
// {
//     int c = -2;
// size_t len = 9;
// // char *buffer[10];
// // printf("%s\n",ft_memset(buffer,  c,  len));
// printf("%d\n",n);
// printf("%d\n",*ptr);
// int n;
// int i = 0;
// int *ptr;
// int t = 1337;
// ptr = &t;
// ptr = &n;
// ptr[i]= 1337;
//1100
// ft_memset(&c,0 ,4);
// ft_memset(&c, 4 , 2);
// ft_memset(&c, 76 , 1);
// printf("%d",c);
//-204
// }
