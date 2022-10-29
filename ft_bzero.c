/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:26:03 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/28 01:54:25 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s,0,n);
}
// int main()
// {
//      int p[] = {1,2,3};
//      int p1[] = {1,2,3};
//      ft_bzero(p,3*sizeof(int));
//      bzero(p1,3);
//      printf("%d\n",p[0]);
//      printf("%d\n",p[1]);
//      printf("%d\n",p[2]);
//      printf("----------------\n");
//      printf("%d\n",p1[0]);
//      printf("%d\n",p1[1]);
//      printf("%d",p1[2]);
// }
