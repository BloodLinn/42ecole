/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:25:27 by aokur             #+#    #+#             */
/*   Updated: 2025/05/28 19:40:41 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (b[i] == '\0')
		return ((char *)a);
	while (a[i] && i < n)
	{
		j = 0;
		while (a[i+j] && b[j] && a[i + j] == b[j] && (i + j) < n)
		{
			if (b[j + 1] == '\0')
				return ((char *)&a[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
int main()
{
	char *a = "alibarisokur";
	char *b = "alib";
	printf("%s", ft_strnstr(a,b,4));
	
}
