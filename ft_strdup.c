/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:45:25 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 10:45:52 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
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

// int	main(void)
// {
// 	int	i;
// 	i = 0;
// 	char	src[] = "zakaria";
// 	char	*dup = ft_strdup(src);
// 	printf("%s+++++++++++\n", dup);
// 	printf("%s----------\n", strdup(src));
// 	return 0;
// }
