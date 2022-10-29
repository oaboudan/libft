/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:00:26 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/27 21:35:38 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *content)
// {
// 	content = NULL;
// 	free(content);
// }
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst)
		return ;
	if(lst)
		del(lst->content);
	free(lst);
}
// int main()
// {
// 	t_list *t1,*t2, *t3,*node;
// 	node = (t_list *)malloc(sizeof(t_list));
// 	//node->next = NULL;
// 	node->content = strdup("oussama");
// 	// // t2 = ft_lstnew("chaimaa");
// 	// // t3 = ft_lstnew("9alwa");
// 	// // t1->next = t2;
// 	// // t2->next = t3;
// 	ft_lstdelone(node, free);
// 	printf("%s",node->content);
// }
// int main()
// {
//   t_list *head;
//   t_list *second;
//   t_list *third;
//   char *s;

//   head = ft_lstnew("zack");
//   second = ft_lstnew(strdup("oussama"));
//   third = ft_lstnew(strdup("anas"));
//   head->next = second;
//   second->next = third;
//   third->next = NULL;
//   ft_lstdelone(second,free);

//   printf("%s",second->content);
// }