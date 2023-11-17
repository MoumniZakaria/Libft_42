/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:01:27 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 13:59:36 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *nb ;
//     t_list *nb1 ;
//     t_list *nb2 ;
//     nb1 = malloc (sizeof(t_list));
//     nb2 = malloc (sizeof(t_list));    
//     nb1->next = nb2;
//     nb2->next = NULL;
//     nb->content = 10;
//     nb1->content = 27;
//     nb2->content = 2;
//     while (nb )
//     {    
//         printf("%d\n",(int)nb->content);
//         nb = nb->next;
//     }
//    ft_lstadd_front(&nb1,nb);
// }