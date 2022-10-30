/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:30:10 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/31 00:32:43 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	t_list *t1, *t2, *t3;
// 	t1 = ft_lstnew("oussama");
// 	t2 = ft_lstnew("chaimaa");
// 	t1->next = t2;
// 	while (t1)
// 	{
// 		printf("%s\n", t1->content);
// 		t1 = t1->next;
// 	}
// }
