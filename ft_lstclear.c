/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:21:04 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/31 00:26:06 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	while (*lst)
	{
		*lst = temp->next;
		ft_lstdelone(temp, del);
		temp = *lst;
	}
}
// int main()
// {
// 	t_list *t1, *t2, *t3;
// 	t1 = ft_lstnew(strdup("oussama"));
// 	t2 = ft_lstnew(strdup("hamza"));
// 	t3 = ft_lstnew(strdup("test"));
// 	t1->next = t2;
// 	t2->next = t3;
// 	t3->next = NULL;
// 	ft_lstclear(&t1, free);
// 	while (t1)
// 	{
// 		printf("%s\n", t1->content);
// 		t1 = t1->next;
// 	}
// }
