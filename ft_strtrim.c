/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:33:13 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/20 21:58:02 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set){
    int i;
    int j;
    char *res;

    i = 0;
    while (s1 && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1 + i);
    while (s1[j + i - 1] != '\0' && ft_strchr(set, s1[j + i - 1]))
        j--;
    res = ft_substr(s1, i, j);
    res[j + 1] = '\0';
    return (res);
}

// int main(){
//     printf("%s\n", ft_strtrim("oussama", "oua"));
// }