/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:47:45 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 23:33:16 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	//const char bb[] = "Valar oussama @boudan";
// 	 char s[] = "tripouille";
// 	printf("%s\n",ft_strchr(s, 't' + 256));
// 	printf("%s",strchr(s, 't' + 256));	
// }
