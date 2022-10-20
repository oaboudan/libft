/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:58:18 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/17 18:58:27 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
     char *dst1;
     char *src1;
     size_t    i;
     
     dst1 = (char *)dst;
     src1 = (char *)src;
     i = 0;
     if(!dst)
          return (0);
     while (i < n)
     {
          dst1[i] = src1[i];
          i++;
     }
     return ((void *)dst);
}
