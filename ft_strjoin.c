/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:48:01 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 10:41:23 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tmp;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *) malloc(len + 1);
	if (!tmp)
		return (NULL);
	while (ft_strlen(s1) && s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while (ft_strlen(s2) && s2[j])
		tmp[i++] = s2[j++];
	tmp[i] = '\0';
	return (tmp);
}
//  int main ()
//  {
//     char s1[]="";
//     char s2[]="";
//     printf("%s",ft_strjoin("my favorite animal is"," "));
//     return 0;
//  }
