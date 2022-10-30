/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:34 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 23:10:36 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
//  int main()
// {
//     char s[] = {-128, 0, 127, 0};
//     char sCpy[] = {-128, 0, 127, 0};
//     char s2[] = {0, 0, 127, 0};
//     char s3[] = {0, 0, 42, 0};

//     printf("%d\n",ft_memcmp(s, sCpy, 2));
//     printf("%d\n",memcmp(s, sCpy, 2));
//     // printf("%d\n",memcmp(s, s2, 0));
// }
