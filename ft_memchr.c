/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:02:42 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/17 21:56:38 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
  #include <string.h> 
#include <stdio.h>
void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	// if (!s)
	// 	return (NULL);
	while(s && i < n)
	{
		if (*(char *)(s + i) == (char)c)
        	return ((void *)(s + i));
    	i++;
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("%s\n",ft_memchr(s, 2 + 256, 3));
// 	printf("%s\n",memchr(s, 2 + 256, 3));
// 	//printf("%s",strchr(NULL,'@'));	
// }