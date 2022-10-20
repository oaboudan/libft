/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:16:13 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/19 17:08:44 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
char    *ft_strnstr(const char *hay, const char *ndl, size_t len)
{
    size_t i;
    int j;
    
    i = 0;
    j = 0;
    if(ndl && !ndl[i])
        return ((char *)hay);
    while (ndl && hay && hay[i])
    {
        while (hay[i + j] == ndl[j] && i + j < len && hay[i + j] != '\0')
            j++;
        if(!ndl[j])
            return((char *)hay + i);
        i++;
        j = 0; 
    }
    return (0);
}
// int main()
// {
// 	char s1[] = "tweet@zari mention @azari @zmoussa!ash";
// 	char s2[] = "@azari";
//     char s3[30] = "aaabcabcd";
//     //char s4[10] = "abcd";
//     //char * empty = (char*)"";
//     printf("%s\n",ft_strnstr(s3, "cd", 6));
//     printf("%lu\n",strlen(s3));
//     printf("%s\n",strnstr(s3,"cd",6));
    
  
// }