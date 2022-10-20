/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:31:33 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/20 21:32:55 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int j;
    int i;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!res)
        return (NULL);
    while (j < ft_strlen(s1))
    {
        res[j] = s1[j];
        j++;
    }
    while (i < ft_strlen(s2))
    {
        res[j] = s2[i];
        j++;
        i++;
    }
    res[j] = '\0';
    return (res);
}