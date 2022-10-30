/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:00:37 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/31 00:14:11 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c < 0 || c > 128)
		return ((char *)s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
// int main()
// {
// 	char s[] = "tripouille";
//     char s2[] = "ltripouiel";
//     char s3[] = "";
// 	const char bb[] = "oussama @boudan";
// 	printf("%s\n",ft_strrchr(s3, 0));
// 	//printf("%s",strrchr(s3, 0));	
// }
