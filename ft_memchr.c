/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:02:42 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 23:08:40 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (*(char *)(s + i) == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	int s[] = {256, 1, 2 ,3 ,4 ,5};

// 	int *p;
// 	p = ft_memchr(s,1, 9);

// 	printf("%d",p[5]);
// 	// printf("%p\n",ft_memchr(s,2, 9));
// 	// printf("%p\n",memchr(s, 2, 9));
// 	// printf("%s",strchr(NULL,'@'));	
// }
