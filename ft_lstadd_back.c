/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:11:52 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/27 16:46:34 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
int main()
{
	t_list *t1, *t2, *t3;
	
	t1 = ft_lstnew("oussama");
	t2 = ft_lstnew("chaimaa");
	t3 = ft_lstnew("test");
	t1->next = t2;
	ft_lstadd_back(&t1, t3);
	printf("%s", ft_lstlast(t1)->content);
}