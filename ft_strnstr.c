/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:15:28 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:20:01 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*result;

	result = (char *)haystack;
	if (*needle == '\0')
		return (result);
	if (len == 0)
		return (0);
	while (*result != '\0' && len > 0)
	{
		i = 0;
		while (result[i] == needle[i] && i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (result);
		}
		result++;
		len--;
	}
	return (0);
}
