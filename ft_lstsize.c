/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:57:18 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/27 02:11:58 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int size;
	
	size = 0;
	while(lst)
	{
		size++;
		lst = lst->next;
	}
	return size;
}
// int main()
// {
// 	t_list *t1, *t2;

// 	t1 = ft_lstnew("oussama");
// 	t2 = ft_lstnew("aboudan");
// 	t1->next = t2;
// 	printf("%d",ft_lstsize(t1));
// }