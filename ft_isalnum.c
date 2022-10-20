/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:04:03 by oaboudan          #+#    #+#             */
/*   Updated: 2022/10/07 21:02:53 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
// int main()
// {
// 	int bb = 'y';
// 	int i = ft_isalnum(bb);
	
// 		printf("%d", i);
		
// 	return 0;

// }