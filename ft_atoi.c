/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:40:48 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/17 18:47:13 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int n;
    int sign;

    i = 0;
    n = 0;
    sign = 1;

    while((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= (-1);
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * sign);
}
// int main()
// {
//     printf("%d\n", ft_atoi("   +-42"));
//     printf("%d", atoi("   +-42"));
// }