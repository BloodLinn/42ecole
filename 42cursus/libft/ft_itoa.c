/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:59:52 by aokur             #+#    #+#             */
/*   Updated: 2025/06/28 18:52:32 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa_str(int n)
{
	char	*a;
	size_t	i;

	while(n)
	{
		a[i] = 
	}
}

int	itoa_tmp(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(itoa_tmp(n) * (sizeof(char)));
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < n)
	{
		tmp[i] = (char);
		i++;
	}
	return (tmp);
}
