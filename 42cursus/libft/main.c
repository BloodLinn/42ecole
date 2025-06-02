/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:57:11 by aokur             #+#    #+#             */
/*   Updated: 2025/06/02 20:04:29 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	int	a = 123;
	int	b;
	
	char *arr1 = (char *)&a;
	char *arr2 = (char *)&b;
	
	printf("A'NIN İLK DEĞERİ: %d\n", a);
	ft_memcpy(arr2, arr1, 1);
	ft_memcpy(arr2 + 1, arr1 + 1, 1);
	ft_memcpy(arr2 + 2, arr1 + 2, 1);
	ft_memcpy(arr2 + 3, arr1 + 3, 1);
	printf("A'NIN İKİNCİ DEĞERİ: %d\n", a);
	printf("YENİ B DEĞERİ: %d\n", b);
}
