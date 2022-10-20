/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:52:52 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/17 18:47:54 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
		return (0);
    while (s1 && s2 && (s1[i] == s2[i]) && i < (n - 1))
        i++;
    if(s1[i] < s2[i])
        return (-1);
    if(s1[i] > s2[i])
        return (1);
    return 0;
    
}
// int main()
// {
//     const char s1[] = "oussama";
//     const char s2[] = "oussam";

//     printf("%d\n",ft_strncmp(s1,s2,7));
//     //printf("%d",strncmp(s1,s2,7));
//     return 0;
// }