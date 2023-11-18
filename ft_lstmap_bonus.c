/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:04:18 by zmoumni           #+#    #+#             */
/*   Updated: 2023/11/18 15:23:41 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*str;

	new = NULL;
	if (!(*f) || !lst)
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
//void	*f(void *content)
//{
//	content = "hello";
//	return (content);
//}
//void	free_content(void *content)
//{
//	free(content);
//}
// int main()
// {
//     t_list *n1;
//     t_list *n2;
//     t_list *n3;
//     t_list *n4;
//     n1 = malloc (sizeof(t_list));
//     n2 = malloc (sizeof(t_list));
//     n3 = malloc (sizeof(t_list));
//     n4 = malloc (sizeof(t_list));
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = NULL;
//     n1->content ="hi1";
//     n2->content = "hi2";
//     n3->content = "hi3";
//     n4->content = "hi4";
//     t_list *str = ft_lstmap(n1, f,free_content);
//     while (str)
//     {
//         printf("%s\n",str->content);
//         str = str->next;
//     }
//     return 0;
// }
