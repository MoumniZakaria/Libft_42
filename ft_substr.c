/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:48:38 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:19:39 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tbl;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len >= ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	tbl = (char *)malloc(sizeof(char) * (len + 1));
	if (!tbl)
		return (NULL);
	while (i < len)
	{
		tbl[i] = s[start];
		i++;
		start++;
	}
	tbl[len] = '\0';
	return (tbl);
}
