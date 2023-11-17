/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:56:35 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 14:01:24 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
// int main()
// {
//     t_list *nb1 ;
// t_list *nb2 ;
// nb1 = malloc (sizeof(t_list));
// nb2 = malloc (sizeof(t_list));
// nb1->next = nb2;
// nb2->next = NULL;
// nb1->content = 10;
// nb2->content = 20;
// ft_lstadd_back(&nb1,ft_lstnew(17));
// while (nb1)
// {
//     printf("%d\n",nb1->content);
//     nb1 = nb1->next;
// }
// }
