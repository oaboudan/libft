/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:30:50 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/31 00:31:04 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
// int main()
// {
// 	t_list *t1;
// 	t1 = (t_list *)malloc(size_t(t_list));
// 	t1->next = (t_list *)malloc(size_t(t_list));
// 	t1->next->next = (t_list *)malloc(size_t(t_list));
// 	t1->next->next->next = (t_list *)malloc(size_t(t_list));
// 	t1->next->next->next = NULL;
// }
