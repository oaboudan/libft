/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:00:38 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/20 22:09:20 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int numlength(int n)
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
    int i;
    int len;

    str = (char *)malloc(numlength(n)+ 1);
    if (!str)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    len = numlength(n) + 1;
    str[len] = '\0';
    len--;
    while (n >= 0)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
        len--;
        if (n == 0)
            break;
    }

    return (str);
}


int main(){
    printf("%s\n", ft_itoa(-12356));
}