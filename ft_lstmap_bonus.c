/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:04:18 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:22:47 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*str;

	new = NULL;
	if (!del || !f || !lst)
		return (NULL);
	while (lst)
	{
		str = ft_lstnew(NULL);
		if (!str)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		str->content = f(lst->content);
		ft_lstadd_back(&new, str);
		lst = lst -> next;
	}
	return (new);
}
