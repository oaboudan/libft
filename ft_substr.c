/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:17:12 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/20 21:50:39 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    j;
    char    *res;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    res = (char *)malloc(len + 1);
    i = 0;
    j = 0;
    if (!res)
        return (NULL);
    while (i < len)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[len] = '\0';
    return (res);
}
