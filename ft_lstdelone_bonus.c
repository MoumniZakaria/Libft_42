/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:52:28 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 12:14:48 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}

// void free_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
// int main()
// {
//     t_list *node = ft_lstnew("Hello I am first");
//     node->next = NULL;
//     printf("%s\n", (char *)node->content);
//     ft_lstdelone(node, free_content);
//     printf("%s\n", (char *)node->content);
//     return 0;
// }