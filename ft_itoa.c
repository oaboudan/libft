/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:00:38 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/25 16:49:11 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int numlength(long n)
{
    int i;

    i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        i++;
        n *= -1;
    }
    while (n)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    long z;

    z = n;
    len = 0;
    str = (char *)malloc(numlength(z)+ 1);
    if (!str)
        return (NULL);
    
    if (z < 0)
    {
        str[0] = '-';
        z *= -1;
        len++;
    }
    len += numlength(z);
    str[len] = '\0';
    len--;
    while (z >= 0)
    {
        str[len] = z % 10 + '0';
        z = z / 10;
        len--;
        if (z == 0)
            break;
    }
    return (str);
}


// int main(){
//     printf("%s\n", ft_itoa(2147483647));
// }