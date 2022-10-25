/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:18:32 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/25 19:26:01 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int scount(char *str, int c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

// static char *ft_fill(char *str, int c)
// {
//     int i;
//     int start;
//     int end;
//     int len;
//     char    *res;

//     i = 0;
//     start = 0;
//     while (str[start] && str[start] == c)
//         start++;
//     end = start;
//     while (str[end] && str[end] != c)
//         end++;
//     len = end - start;
//     res = (char *)malloc(len + 1);
//     if (!res)
//         return (NULL);
//     while (i < len)
//     {
//         res[i] = str[start];
//         i++;
//         start++;
//     }
//     res[i] = '\0';
//     return (res);
// }

static char    **ft_free(char **ptr, int i)
{
    while (i)
        free(ptr[i--]);
    free(ptr);
    return (NULL);
}

char    **ft_split(char const *str, int c)
{
    char    **res;
    int     i;
    int     j;
    int     cnt;
    

    i = 0;
    cnt = -1;
    res = (char **)malloc(sizeof(char *) * (scount((char *)str, c) + 1));
    if (!res)
        return (NULL);
    while (++cnt < scount((char *)str, c))
    {
        while (str[i] && str[i] == c)
            i++;
        j = i;
        while (str[i] && str[i] != c)
            i++;
        res[cnt] = ft_substr(str,j,i - j);
        if (!res[cnt])
            return (ft_free(res, cnt));
    }
    res[cnt] = 0;
    return (res);
}

// int main(){
//     int i;
//     char str[] = "oussama aboudan 1337 gdgdd ";
//     char **ret = ft_split(str, ' ');
    
//     i = -1;
//     while (++i < scount(str, ' '))
//         printf("%s\n", ret[i]);

// }
