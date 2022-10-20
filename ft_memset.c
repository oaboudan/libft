/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:31:56 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/10 23:14:16 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libc.h"
#include <stdio.h>
void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    //unsigned char * d = b;

    i = 0;
    if(!b)
        return NULL;
    while (len > i)
    {
        *(unsigned char *)(b + i) = (char)c;
        i++;
    }
    return (void *)b;
    
}