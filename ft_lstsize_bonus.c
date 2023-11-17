/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:30:36 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/17 12:01:43 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cp;

	cp = 0;
	while (lst)
	{
		lst = lst->next;
		cp++;
	}
	return (cp);
}
// int main()
// {
//     t_list *nb1 ;
//     t_list *nb2 ;
//     nb1 = malloc (sizeof(t_list));
//     nb2 = malloc (sizeof(t_list));
//     nb1->next = nb2;
//     nb2->next = NULL;
//     nb1->content = 27;
//     nb2->content = 2;
//     // cast
//     printf("%d\n",ft_lstsize(nb1));
// }
