/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:45:00 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/17 19:01:41 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 void *ft_memmove(void *dst, const void *src, size_t len)
 {
    size_t  i;
     char *dst1;
     char *src1;
     
     dst1 = (char *)dst;
     src1 = (char *)src;
     i = 0;
     if(!dst)
          return NULL;
      if (dst1 > src1)
      {
        while (len--)
            dst1[len] = src1[len]; 
      }
      else
        dst1 = (char *)ft_memcpy(dst,src,len);
     return ((void *)dst);
 }
//  int main()
// {
//   int i;
//   int source[10] = {1,2,3,4,5,6,7,8};
//   int destination[12];
//   ft_memmove(destination, source, sizeof(int) * 8);
//   // int source1[10] = {1,2,3,4,5,6,7,8};
//   // int destination1[10];
//   // memmove(source1+2, source1, sizeof(int) * 4);
//   // for (int i = 0; i < 10; i++)
//   //   printf("destination[%d]=%d\n", i, destination[i]);
//   for (int i = 0; i < 10; i++)
//     printf("source[%d]=%d\n", i + 1, source[i]);
//   // printf("-----------\n");
//   // for (int i = 0; i < 10; i++)
//   //   printf("destination[%d]=%d\n", i, destination[i]);
//   // for (int i = 0; i < 10; i++)
//   //   printf("source1[%d]=%d\n", i + 1, source1[i]);
//   return 0;
// }
