/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:26:04 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/24 19:05:08 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char ft(unsigned int i, char c)
// {
// 	return i + c;
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))

{ 
	unsigned int i;
	if(!s)
		return (NULL);
	char *t = (char *)malloc(ft_strlen(s) + 1);
	if(!t || !s)
		return (NULL);
	i = 0;
	while(s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
// int main()
// {
// 	printf("%s",ft_strmapi("123",ft));
// }