/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:48:34 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:25:17 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		return ((char *)&s[len + 1]);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
