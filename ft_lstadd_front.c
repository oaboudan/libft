/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:13:07 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/31 00:24:53 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
// int main()
// {
// 	t_list *t1, *t2, *new;	
// 	t1 = ft_lstnew("oussama");
// 	t2 = ft_lstnew("chaimaa");
// 	new = ft_lstnew("new");
// 	t1->next = t2;
// 	ft_lstadd_front(&t2,new);
// 	printf("%s", t1->content);
// 	printf("%s", t2->content);
// }
