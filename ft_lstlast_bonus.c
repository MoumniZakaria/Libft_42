/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:41:51 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 15:11:30 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
// int main()
// {
//     t_list *nb1 ;
//     t_list *nb2 ;
//     t_list *nb3 ;
//     t_list *nb4 ;
//     t_list *rst ;
//     nb1 = malloc (sizeof(t_list));
//     nb2 = malloc (sizeof(t_list));
//     nb3 = malloc (sizeof(t_list));
//     nb4 = malloc (sizeof(t_list));
//     nb1->next = NULL;
//     // nb2->next = nb3;
//     // nb3->next = nb4;
//     // nb4->next = NULL;
//     nb1->content = 10;
//     // nb2->content = 20;
//     // nb3->content = 30;
//     // nb4->content = 40;
//     rst = ft_lstlast(nb1);
//     printf("%d",rst->content);
// }
