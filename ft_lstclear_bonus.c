/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:27:51 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/23 16:08:15 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*nxt;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		nxt = tmp->next;
		(del)((tmp)->content);
		free(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
