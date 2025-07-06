/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:08:44 by aokur             #+#    #+#             */
/*   Updated: 2025/07/06 18:11:46 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc((len + 1) * sizeof(char));
	a = ft_strlen(s);
	if (!tmp)
		return (NULL);
	if (a < start + len)
		len = a - start;
	if (a < start)
	{
		tmp[i] = '\0';
		return (tmp);
	}
	while (i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[start + i] = '\0';
	return (tmp);
}
