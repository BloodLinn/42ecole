/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:57:11 by aokur             #+#    #+#             */
/*   Updated: 2025/06/04 17:13:39 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	int a = 65;
	char *b = (char *)&a;
	char c[] = "selam";

	ft_memmove(c, &a, 8);
	printf("A'nın değeri: %c\n", b[3]);

	return (0);
}
