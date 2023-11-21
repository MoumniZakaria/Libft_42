/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:30:36 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/20 11:17:29 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cp;
	t_list	*tmp;

	cp = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		cp++;
	}
	return (cp);
}
