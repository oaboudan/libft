/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:47 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/07 19:15:01 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t i;

    i = 0;
    dlen = ft_strlen(dst);
    if(dstsize > dlen)
    {
        while (i < dstsize - dlen - 1  && src[i])
        {
            dst[dlen + i] = src[i];
            i++;
        }
        dst[i + dlen] = '\0';
        return (dlen + ft_strlen(src));
    }
    return (ft_strlen(src) + dstsize);
}
// int main()
// {
//     char src[] = "OUSSAM";
//     char dst[20] = "1234";
//     char src2[] = "OUSSAM";
//     char dst2[20] = "1234";
    
//     printf("%zu\n",strlcat(dst,src,6));
//     printf("%s\n",dst);
    
//     printf("%zu\n",ft_strlcat(dst2,src2,6));
//     printf("%s\n",dst2);
// }
    


