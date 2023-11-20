/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:27:51 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 10:23:03 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*nxt;

	tmp = *lst;
	if (!lst || !del)
		return ;
	while (tmp)
	{
		nxt = tmp->next;
		(del)((tmp)->content);
		free(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
