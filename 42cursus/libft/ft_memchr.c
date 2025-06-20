/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:25:03 by aokur             #+#    #+#             */
/*   Updated: 2025/06/20 17:02:44 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	char	b;
	size_t	i;

	a = (char *)s;
	b = (char )c;
	i = 0;
	if (!a || !b)
		return (NULL);
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}
