/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:46:12 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/30 22:52:58 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = malloc (count * size);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}
//  int main()
//  {
//     int *array;
//      *array1;
//     int i = 0;

//    array1 = calloc(2, 7);
//    printf("%d\n", *(array1));
//    printf("%d\n", *(array1 + 1));
//    printf("%d\n", *(array1 + 2));
//    printf("%d\n", *(array1 + 3));
//    printf("%d\n", *(array1 + 4));
//    printf("%d\n", *(array1 + 5));
//    printf("%d\n", *(array1 + 6));
//    printf("%d\n", *(array1 + 7));
//    printf("%d\n", *(array1 + 8));
//    printf("%d\n", *(array1 + 9));
//    printf("%d\n", *(array1 + 10));
//    printf("%d\n", *(array1 + 11));
//    printf("%d\n", *(array1 + 12));
//    printf("%d\n", *(array1 + 13));
//    printf("%d\n", *(array1 + 200));
//    printf("%derg\n", *(array1 + 14));
//    printf("%d\n", *(array1 + 8));
//  }
