/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:45:25 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/21 13:34:15 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		len;

	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	return (ft_strcpy(dup, (char *)src));
}
