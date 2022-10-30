/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:17:29 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 23:38:00 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void fnnnnnn(unsigned int i, char *c)
// {
// 	*c= *c - 32 ;
// }

// int main()
// {
// 	char str[] = "abcdef";
// 	ft_striteri(str, fnnnnnn);
// 	printf("%s", str);
// }
