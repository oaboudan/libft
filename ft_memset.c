/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:31:56 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/25 22:41:39 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libc.h"
#include <stdio.h>
void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    //unsigned char * d = b;

    i = 0;
    while (len > i)
    {
        *(unsigned char *)(b + i) = (char)c;
        i++;
    }
    return (void *)b;
    
}