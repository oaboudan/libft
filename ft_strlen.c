/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:21:28 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/07 15:04:30 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
size_t	ft_strlen(const char *src)
{
	if(!src)
		return 0;
	size_t i;
	i = -1;
	while (src[++i]);
	return (i);
}
// #include<stdio.h>	
// int main()
// {
// 	char *s = NULL;
// 	printf("%zu", ft_strlen(s));
// }
