/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:47:45 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/18 19:30:05 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if(c < 0 || c > 128)
		return (char *)s;
	if(c == 0)
		return (char *)(s + ft_strlen(s));
	if(!s)
		return (NULL);
	while(s[i])
	{
		if (s[i] == c)
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
