/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:59:52 by aokur             #+#    #+#             */
/*   Updated: 2025/07/03 16:44:42 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoa_tmp(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*itoa_str(int n)
{
	char	*a;
	int		i;
	int		b;

	b = itoa_tmp(n);
	a = malloc(b * sizeof(char));
	i = 0;
	if (!a)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		a[i] = '-';
		i++;
	}
	while (i < b)
	{
		a[b - 1] = (n % 10) + 48;
		n /= 10;
		b--;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		i;

	tmp = malloc(itoa_tmp(n) * (sizeof(char)));
	i = 0;
	if (!tmp)
		return (NULL);
	tmp = itoa_str(n);
	return (tmp);
}
