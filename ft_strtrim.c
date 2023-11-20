/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:54:57 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:19:53 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*tmp;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (start < ft_strlen(s1))
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	end = ft_strlen(s1);
	while (end > 0)
	{
		if (!ft_strrchr(set, s1[end]))
			break ;
		end--;
	}
	tmp = ft_substr(s1, start, (end - start + 1));
	return (tmp);
}
