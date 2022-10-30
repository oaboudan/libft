/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:31:56 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 23:21:03 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		*(unsigned char *)(b + i) = (char)c;
		i++;
	}
	return ((void *)b);
}
// int main()
// {
// 	// int s[] = {513, 1, 2 ,3 ,4 ,5};

// 	// int *p;
// 	// p = ft_memset(s,1, 9);

// 	// printf("%d",p[0]);
//     int i = 256;
//     ft_memset(&i,136,1);
//     ft_memset((char *)&i+1,19,1);
//     printf("%d\n",i);
// }
